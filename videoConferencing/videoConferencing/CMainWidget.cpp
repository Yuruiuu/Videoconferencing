#include "CMainWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

CMainWidget::CMainWidget(QWidget* p):CFrameLessWidgetBase(p)
{
	initUI();
}

CMainWidget::~CMainWidget()
{
}

void CMainWidget::initUI()
{
	m_pTitleBar = new CTitleBar(this);
	m_pCLeftVideoList = new CLeftVideoList(this);
	m_pCBigVideoWidget = new CBigVideoWidget(this);
	m_pCBottomBar = new CBottomBar(this);

	QVBoxLayout* mainVLay = new QVBoxLayout(this);
	mainVLay->setSpacing(0);//ÉèÖÃ¼äÏ¶
	mainVLay->addWidget(m_pTitleBar);

	QHBoxLayout* pHLay = new QHBoxLayout(this);

	pHLay->addWidget(m_pCLeftVideoList);
	pHLay->addWidget(m_pCBigVideoWidget);

	mainVLay->addLayout(pHLay);
	mainVLay->addWidget(m_pCBottomBar);

	mainVLay->setContentsMargins(0, 0, 0, 0);
}
