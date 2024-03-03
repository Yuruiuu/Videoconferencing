#pragma once
#include <QObject>
#include "IAgoraRtcEngine.h"
#include <memory>
#include "commons.h"

using namespace agora::rtc;
using namespace std;

class CAgoraObject : public QObject
{
	Q_OBJECT

public:
	CAgoraObject();
	~CAgoraObject();

	int init();
	int release();
	int joinChannel(const QString& channel, uint uid);
	BOOL LocalVideoPreview(HWND hVideoWnd, BOOL bPreviewOn, RENDER_MODE_TYPE renderType = RENDER_MODE_TYPE::RENDER_MODE_FIT);
	BOOL RemoteVideoRender(uid_t uid, HWND hVideoWnd, RENDER_MODE_TYPE renderType = RENDER_MODE_TYPE::RENDER_MODE_HIDDEN);
	void shareScreen(VecWindowShareInfo& vecWindowShare);//获取源
	int start_share_screen(int type, void* hwnd);//开始共享
	int stop_share_window();//结束共享

signals:
	void sender_joinedChannelSuccess(const QString& qsChannel, unsigned int uid, int elapsed);
	void sender_userJoined(unsigned int uid, int elapsed);
	void sender_userOffline(unsigned int uid, USER_OFFLINE_REASON_TYPE reason);

private:
	IRtcEngine* m_rtcEngine;
	std::unique_ptr<agora::rtc::IRtcEngineEventHandler> m_eventHandler;
};

