#pragma once
#include <QWidget>
#include<QPushButton>
#include "CCustomToolButton.h"

class CBottomBar :public QWidget
{
	Q_OBJECT
public:
	CBottomBar(QWidget* p = nullptr);
	~CBottomBar();

signals:
	void sig_endMeeting();
	void sig_shareScreen();
private:
	CCustomToolButton* m_pAudioToolButton;
	CCustomToolButton* m_pCameraToolButton;
	CCustomToolButton* m_pShareScreenToolButton;
	CCustomToolButton* m_pSecurityToolButton;
	CCustomToolButton* m_pInvitationToolButton;
	CCustomToolButton* m_pManageMemberToolButton;
	CCustomToolButton* m_pChatToolButton;
	CCustomToolButton* m_pRecordToolButton;
	CCustomToolButton* m_pGroupDiscussionToolButton;
	CCustomToolButton* m_pApplicationToolButton;
	CCustomToolButton* m_pSetToolButton;
	QPushButton* m_pFullScreenButton;
	QPushButton* m_pEndMeetingButton;
};
