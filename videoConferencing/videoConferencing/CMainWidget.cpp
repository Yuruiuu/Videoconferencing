#include "CMainWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include "CSmallVideoWidget.h"
#include <QGuiApplication>
#include <QScreen>
#include "ShareScreenDialog.h"

CMainWidget::CMainWidget(QWidget* p)
	:CFrameLessWidgetBase(p)
{
	initUI();

	m_pAgora = new CAgoraObject();

	if (0 != m_pAgora->init())
	{
		QMessageBox::information(this, u8"提示", u8"agora init failed");
		exit(EXIT_FAILURE);
	}


	connect(m_pAgora, &CAgoraObject::sender_joinedChannelSuccess,
		this, &CMainWidget::onLocalJoinedSuccess);
	connect(m_pAgora, &CAgoraObject::sender_userJoined, 
		this, &CMainWidget::onRemoteJoined);
}

CMainWidget::~CMainWidget()
{
	if (m_pAgora)
	{
		delete m_pAgora;
		m_pAgora = nullptr;
	}
}

void CMainWidget::joinRoom(const QString& roomId)
{
	m_pAgora->joinChannel(roomId, 123678);
}

void CMainWidget::initUI()
{
	m_pTitleBar = new CTitleBar(this);
	m_pCLeftVideoList = new CLeftVideoList(this);
	m_pCBigVideoWidget = new CBigVideoWidget(this);
	m_pCBottomBar = new CBottomBar(this);

	QVBoxLayout* mainVLay = new QVBoxLayout(this);
	mainVLay->setSpacing(0);//设置间隙
	mainVLay->addWidget(m_pTitleBar);

	QHBoxLayout* pHLay = new QHBoxLayout(this);

	pHLay->addWidget(m_pCLeftVideoList);

	QVBoxLayout* pVLay = new QVBoxLayout(this);
	pVLay->addWidget(m_pCBigVideoWidget);
	pVLay->addWidget(m_pCBottomBar);

	pHLay->addLayout(pVLay);
	mainVLay->addLayout(pHLay);

	mainVLay->setContentsMargins(0, 0, 0, 0);

	connect(m_pTitleBar, &CTitleBar::sig_close, this, &CMainWidget::onClose);
	connect(m_pCBottomBar, &CBottomBar::sig_shareScreen, this, &CMainWidget::onShareScreen);
	connect(m_pCBottomBar, &CBottomBar::sig_endMeeting, this, &CMainWidget::onEndMeeting);
}

void CMainWidget::resizeEvent(QResizeEvent* event)
{
	int w = this->width();
	int h = this->height();
	
	QScreen* screen = QGuiApplication::primaryScreen(); // 获取主屏幕
	QRect geometry = screen->geometry(); // 获取屏幕的几何信息

	int screenWidth = geometry.width(); // 获取屏幕宽度
	int screenHeight = geometry.height(); // 获取屏幕高度

	if (!this->isMaximized())
		this->move((screenWidth - w) / 2, (screenHeight - h) / 2);
}

//本地加入成功
void CMainWidget::onLocalJoinedSuccess(const QString& qsChannel, unsigned int uid, int elapsed)
{
	m_pAgora->LocalVideoPreview(m_pCBigVideoWidget->getHwnd(), true);
}

//远程用户加入房间
void CMainWidget::onRemoteJoined(uid_t uid, int elapsed)
{
	CSmallVideoWidget* pSmall = new CSmallVideoWidget();
	m_pCLeftVideoList->addVideoWidget(pSmall);
	m_pAgora->RemoteVideoRender(uid, (HWND)(pSmall->winId()));
}

void CMainWidget::onClose()
{
	close();
}

void CMainWidget::onShareScreen()
{
	VecWindowShareInfo vecWindowShare;//保存需要共享的信息
	m_pAgora->shareScreen(vecWindowShare);

	ShareScreenDialog* share = new ShareScreenDialog(this);
	share->initListWidget(vecWindowShare);

	connect(share, &ShareScreenDialog::sig_StartShare, this, &CMainWidget::startShareScreen);

	share->exec();
}

void CMainWidget::onEndMeeting()
{
	close();
}

void CMainWidget::startShareScreen(int type, void* hwnd)
{
	if (0 != m_pAgora->start_share_screen(type, hwnd))
	{
		QMessageBox::information(this, u8"提示", u8"共享屏幕失败");
	}
}