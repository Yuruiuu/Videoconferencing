#pragma once
#include <QObject>
#include "CFrameLessWidgetBase.h"
#include "CTitleBar.h"
#include "CLeftVideoList.h"
#include "CBigWidget.h"
#include "CBottomBar.h"
#include "CAgoraObject.h"

class CMainWidget:public CFrameLessWidgetBase
{
	Q_OBJECT
public:
	CMainWidget(QWidget* p = nullptr);
	~CMainWidget();

	void joinRoom(const QString& roomId);

private:
	void initUI();

private slots:
	//void on_btnJoin_clicked();
	void onLocalJoinedSuccess(const QString& qsChannel, unsigned int uid, int elapsed);
	void onRemoteJoined(uid_t uid, int elapsed);

private:
	CTitleBar* m_pTitleBar = nullptr;
	CLeftVideoList* m_pCLeftVideoList = nullptr;
	CBigVideoWidget* m_pCBigVideoWidget = nullptr;
	CBottomBar* m_pCBottomBar = nullptr;

	CAgoraObject* m_pAgora = nullptr;
};

