#include "CBottomBar.h"
#include <QHBoxLayout>
CBottomBar::CBottomBar(QWidget* p)
	:QWidget(p)
{
	this->setFixedHeight(100);

	setAttribute(Qt::WA_StyledBackground);
	setStyleSheet("background-color:rgb(230,240,250)");

	m_pAudioToolButton = new CCustomToolButton(u8"声音", ":/mainwidget/resources/mainwidget/bottomBar/microfeng_open.svg", ":/mainwidget/resources/mainwidget/bottomBar/microfeng_open_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/microfeng_close.svg", ":/mainwidget/resources/mainwidget/bottomBar/microfeng_close_hover.svg", true, this);

	m_pCameraToolButton = new CCustomToolButton(u8"摄像头", ":/mainwidget/resources/mainwidget/bottomBar/camera_open.svg", ":/mainwidget/resources/mainwidget/bottomBar/camera_open_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/camera_close.svg", ":/mainwidget/resources/mainwidget/bottomBar/camera_close_hover.svg", true, this);

	m_pShareScreenToolButton = new CCustomToolButton(u8"共享屏幕", ":/mainwidget/resources/mainwidget/bottomBar/screen_share.svg", ":/mainwidget/resources/mainwidget/bottomBar/screen_share_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/screen_share.svg", ":/mainwidget/resources/mainwidget/bottomBar/screen_share_hover.svg", true, this);

	m_pSecurityToolButton = new CCustomToolButton(u8"安全", ":/mainwidget/resources/mainwidget/bottomBar/anquan.svg", ":/mainwidget/resources/mainwidget/bottomBar/anquan_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/anquan.svg", ":/mainwidget/resources/mainwidget/bottomBar/anquan_hover.svg", true, this);

	m_pInvitationToolButton = new CCustomToolButton(u8"邀请", ":/mainwidget/resources/mainwidget/bottomBar/yaoqing.svg", ":/mainwidget/resources/mainwidget/bottomBar/yaoqing_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/yaoqing.svg", ":/mainwidget/resources/mainwidget/bottomBar/yaoqing_hover.svg", true, this);

	m_pManageMemberToolButton = new CCustomToolButton(u8"管理成员", ":/mainwidget/resources/mainwidget/bottomBar/manage_member.svg", ":/mainwidget/resources/mainwidget/bottomBar/manage_member_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/manage_member.svg", ":/mainwidget/resources/mainwidget/bottomBar/manage_member_hover.svg", true, this);

	m_pChatToolButton = new CCustomToolButton(u8"聊天", ":/mainwidget/resources/mainwidget/bottomBar/chat.svg", ":/mainwidget/resources/mainwidget/bottomBar/chat_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/chat.svg", ":/mainwidget/resources/mainwidget/bottomBar/chat_hover.svg", true, this);

	m_pRecordToolButton = new CCustomToolButton(u8"录制", ":/mainwidget/resources/mainwidget/bottomBar/rec.svg", ":/mainwidget/resources/mainwidget/bottomBar/rec_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/microfeng_open.svg", ":/mainwidget/resources/mainwidget/bottomBar/microfeng_open.svg", true, this);

	m_pGroupDiscussionToolButton = new CCustomToolButton(u8"分组讨论", ":/mainwidget/resources/mainwidget/bottomBar/group.svg", ":/mainwidget/resources/mainwidget/bottomBar/group_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/group.svg", ":/mainwidget/resources/mainwidget/bottomBar/group_hover.svg", true, this);

	m_pApplicationToolButton = new CCustomToolButton(u8"应用", ":/mainwidget/resources/mainwidget/bottomBar/application.svg", ":/mainwidget/resources/mainwidget/bottomBar/application_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/application.svg", ":/mainwidget/resources/mainwidget/bottomBar/application_hover.svg", true, this);

	m_pSetToolButton = new CCustomToolButton(u8"设置", ":/mainwidget/resources/mainwidget/bottomBar/ctrlwidget_set.svg", ":/mainwidget/resources/mainwidget/bottomBar/ctrlwidget_set_hover.svg",
		":/mainwidget/resources/mainwidget/bottomBar/ctrlwidget_set.svg", ":/mainwidget/resources/mainwidget/bottomBar/ctrlwidget_set_hover.svg", true, this);

	m_pFullScreenButton = new QPushButton(this);
	m_pFullScreenButton->setFixedSize(48, 48);
	m_pFullScreenButton->setStyleSheet("QPushButton{background-image:url(:/mainwidget/resources/mainwidget/bottomBar/fullScreen.svg);border:none;}"
		"QPushButton:hover{background-image:url(:/mainwidget/resources/mainwidget/bottomBar/fullScreen_hover.svg);border:none;}"
		"QPushButton:pressed{background-image:url(:/mainwidget/resources/mainwidget/bottomBar/fullScreen.svg);border:none;}");

	m_pEndMeetingButton = new QPushButton(u8"结束会议", this);
	m_pEndMeetingButton->setFixedSize(180, CTRL_TOOLBUTTON_HEIGHT - 12);
	m_pEndMeetingButton->setStyleSheet("QPushButton{"
		"background-color:rgb(230,230,230);color:rgb(230,0,0);border-radius:5px;}"
		"QPushButton:hover{"
		"background-color:rgb(200,230,230);color:rgb(255,0,0);border-radius:5px;}");

	QHBoxLayout* pHLay = new QHBoxLayout(this);
	pHLay->addStretch();
	pHLay->addWidget(m_pAudioToolButton);
	pHLay->addWidget(m_pCameraToolButton);
	pHLay->addStretch();
	pHLay->addWidget(m_pShareScreenToolButton);
	pHLay->addWidget(m_pSecurityToolButton);
	pHLay->addWidget(m_pInvitationToolButton);
	pHLay->addWidget(m_pManageMemberToolButton);
	pHLay->addWidget(m_pChatToolButton);
	pHLay->addWidget(m_pRecordToolButton);
	pHLay->addWidget(m_pGroupDiscussionToolButton);
	pHLay->addWidget(m_pApplicationToolButton);
	pHLay->addWidget(m_pSetToolButton);
	pHLay->addWidget(m_pFullScreenButton);
	pHLay->addStretch();
	pHLay->addWidget(m_pEndMeetingButton);
	pHLay->addStretch();

	connect(m_pShareScreenToolButton, &CCustomToolButton::sig_clicked, this, &CBottomBar::sig_shareScreen);
	connect(m_pEndMeetingButton, &QPushButton::clicked, this, &CBottomBar::sig_endMeeting);
}
CBottomBar::~CBottomBar()
{

}
