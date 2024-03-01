#include "CMainWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include "CSmallVideoWidget.h"

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
	pHLay->addWidget(m_pCBigVideoWidget);

	mainVLay->addLayout(pHLay);
	mainVLay->addWidget(m_pCBottomBar);

	mainVLay->setContentsMargins(0, 0, 0, 0);
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