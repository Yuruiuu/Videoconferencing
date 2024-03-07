#include "CAgoraObject.h"
#include "agoraconfig.h"
#include <QMessageBox>
#include <QProcess>
#include <QDebug>


//Specify your APP ID here
#define APPID ""
#define APP_TOKEN   ""

CAgoraConfig gAgoraConfig;

class AgoraRtcEngineEvent : public agora::rtc::IRtcEngineEventHandler
{
    CAgoraObject& m_pInstance;
public:
    AgoraRtcEngineEvent(CAgoraObject& engine)
        :m_pInstance(engine)
    {}

    virtual void onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed) override
    {
        emit m_pInstance.sender_joinedChannelSuccess(QString(channel), uid, elapsed);
    }

    virtual void onUserJoined(uid_t uid, int elapsed) override
    {
        emit m_pInstance.sender_userJoined(uid, elapsed);
    }

    virtual void onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason) override
    {
        emit m_pInstance.sender_userOffline(uid, reason);
    }
};

CAgoraObject::CAgoraObject()
{
}

CAgoraObject::~CAgoraObject()
{
    release();
}

int CAgoraObject::init()
{
	m_rtcEngine = createAgoraRtcEngine();
	m_eventHandler.reset(new AgoraRtcEngineEvent(*this));

    // Declare a RTC engine context
    agora::rtc::RtcEngineContext context;
    // Retrieve event handler
    context.eventHandler = m_eventHandler.get();
    QByteArray temp;
    // Pass appId to the context
    if (strlen(APPID))
        context.appId = APPID;
    else {
        QString strAppId = gAgoraConfig.getAppId();
        if (strAppId.length() == 0) {
            gAgoraConfig.setAppId(QString(""));
        }
        temp = strAppId.toUtf8();
        context.appId = const_cast<const char*>(temp.data());
    }
    if (*context.appId == '\0')
    {
        QMessageBox::critical(nullptr, ("AgoraOpenLive"),
            ("You must specify APP ID before using the demo"));
        QProcess process;
        process.startDetached("notepad.exe", { "D:/agora_account/AgoraConfigOpenVideoCall.ini" }, "");
        ExitProcess(0);
    }
    // initialize the RtcEngine with the context
    if (0 != m_rtcEngine->initialize(context))
    {
        return -1;
    }

    m_rtcEngine->enableAudio();
    m_rtcEngine->enableVideo();
    m_rtcEngine->setChannelProfile(CHANNEL_PROFILE_COMMUNICATION);

    qDebug() << "0" << endl;
	return 0;
}

int CAgoraObject::release()
{
    if (m_rtcEngine) {
        //同步和异步
        m_rtcEngine->release(true);//同步
        m_rtcEngine = nullptr;
    }
    return 0;
}

int CAgoraObject::joinChannel(const QString& channel, uint uid)
{
    if (channel.isEmpty()) {
        QMessageBox::warning(nullptr, ("AgoraHighSound"), ("channel name is empty"));
        return -1;
    }
    // Starts local video preview
    m_rtcEngine->startPreview();

    QString token = gAgoraConfig.getAppToken();

    // Parameters are: token channelId, optionalInfo, uid
    // https://docs.agora.io/en/Video/API%20Reference/cpp/classagora_1_1rtc_1_1_i_rtc_engine.html#a3eb5ee494ce124b34609c593719c89ab
    int r = m_rtcEngine->joinChannel(token.toUtf8().data(), channel.toUtf8().data(), nullptr, uid);
    return r;
}

// Plays the local video
BOOL CAgoraObject::LocalVideoPreview(HWND hVideoWnd, BOOL bPreviewOn, RENDER_MODE_TYPE renderType/* = RENDER_MODE_TYPE::RENDER_MODE_FIT*/)
{
    int nRet = 0;

    if (bPreviewOn) {
        VideoCanvas vc;

        vc.uid = 0;
        vc.view = hVideoWnd;
        vc.renderMode = renderType;

        m_rtcEngine->setupLocalVideo(vc);
        nRet = m_rtcEngine->startPreview();
    }
    else
        nRet = m_rtcEngine->stopPreview();

    return nRet == 0 ? TRUE : FALSE;
}

// Plays the remote video
BOOL CAgoraObject::RemoteVideoRender(uid_t uid, HWND hVideoWnd, RENDER_MODE_TYPE renderType/* = RENDER_MODE_TYPE::RENDER_MODE_HIDDEN*/)
{
    int nRet = 0;

    VideoCanvas vc;

    vc.uid = uid;
    vc.view = hVideoWnd;
    vc.renderMode = renderType;

    m_rtcEngine->setupRemoteVideo(vc);

    return nRet == 0 ? TRUE : FALSE;
}

void CAgoraObject::shareScreen(VecWindowShareInfo& vecWindowShare)
{
	SIZE size;
	size.cx = SHARE_WINDOW_ITEM_WIDTH;
	size.cy = SHARE_WINDOW_ITEM_HEIGHT;

    //获取共享源
	IScreenCaptureSourceList* infos = m_rtcEngine->getScreenCaptureSources(size, size, true);
	int info_count = infos->getCount();

	for (size_t i = 0; i < info_count; i++)
	{
		ScreenCaptureSourceInfo info = infos->getSourceInfo(i);

		QImage image(reinterpret_cast<const uchar*>(info.thumbImage.buffer),
			info.thumbImage.width,
			info.thumbImage.height,
			QImage::Format_ARGB32);

		if (!image.isNull())
		{
			window_share_info window;
			QPixmap pixmap = QPixmap::fromImage(image.copy());
			pixmap = pixmap.scaled(QSize(SHARE_WINDOW_ITEM_WIDTH, SHARE_WINDOW_ITEM_HEIGHT));

			window.pixmap = pixmap;

			if (info.type == ScreenCaptureSourceType_Screen)//桌面
			{
				window.windowType = window_share_info::Screen;
			}
			else if (info.type == ScreenCaptureSourceType_Window)//应用程序
			{
				window.windowType = window_share_info::Window;
			}

			window.name = info.sourceName;
			window.hwnd = info.sourceId;

			vecWindowShare.push_back(window);
		}
	}
}

int CAgoraObject::start_share_screen(int type, void* hwnd)
{
	RECT rect;
	WINDOWINFO windowInfo;
	windowInfo.cbSize = sizeof(WINDOWINFO);
	::GetWindowInfo((HWND)hwnd, &windowInfo);
	rect = windowInfo.rcWindow;

	int win_w = abs(rect.left - rect.right);
	int win_h = abs(rect.top - rect.bottom);

	agora::rtc::Rectangle regionRect(0, 0, win_w, win_h);

	ScreenCaptureParameters captureParams;
	captureParams.dimensions.width = win_w;
	captureParams.dimensions.height = win_h;
	captureParams.frameRate = 25;
	captureParams.windowFocus = true;
	captureParams.captureMouseCursor = true;

	if (type == 0)  // screen
	{
		// 共享桌面
		return m_rtcEngine->startScreenCaptureByDisplayId(0, regionRect, captureParams);
	}
	else if (type == 1) //app
	{
		// 共享窗口
		return m_rtcEngine->startScreenCaptureByWindowId(hwnd, regionRect, captureParams);
	}

	return -1;
}

int CAgoraObject::stop_share_window()
{
	return m_rtcEngine->stopScreenCapture();
}

