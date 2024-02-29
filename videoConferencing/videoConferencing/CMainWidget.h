#pragma once

#include "CFrameLessWidgetBase.h"
#include "CTitleBar.h"
#include "CLeftVideoList.h"
#include "CBigWidget.h"
#include "CBottomBar.h"
class CMainWidget:public CFrameLessWidgetBase
{
	Q_OBJECT
public:
	CMainWidget(QWidget* p = nullptr);
	~CMainWidget();

private:
	void initUI();
private:
	CTitleBar* m_pTitleBar = nullptr;
	CLeftVideoList* m_pCLeftVideoList = nullptr;
	CBigVideoWidget* m_pCBigVideoWidget = nullptr;
	CBottomBar* m_pCBottomBar = nullptr;
};

