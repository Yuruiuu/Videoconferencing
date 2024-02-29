#include "CTitleBar.h"
#include <QHBoxLayout>

#pragma comment(lib, "user32.lib")
#include <qt_windows.h>


CTitleBar::CTitleBar(QWidget* p):
	QWidget(p)
{
	this->setAttribute(Qt::WA_DeleteOnClose);

	initUI();
}

CTitleBar::~CTitleBar()
{
}

void CTitleBar::initUI()
{
	//禁止父窗口影响子窗口样式
	setAttribute(Qt::WA_StyledBackground);
	this->setFixedHeight(32 + 5 * 2);
	this->setStyleSheet("background-color:rgb(54,54,54)");

	m_pLogo = new QLabel(this);
	m_pLogo->setFixedSize(32, 32);
	m_pLogo->setStyleSheet("background-image:url(:/LessWidgetPro/resources/titlebar/title_icon.png);border:none");

	m_pTitleTextLabel = new QLabel(this);
	m_pTitleTextLabel->setText(u8"我是标题");
	m_pTitleTextLabel->setFixedWidth(120);
	m_pTitleTextLabel->setStyleSheet("QLabel{font-family: Microsoft YaHei; \
		font-size:18px; \
		color:#BDC8E2;background-color:rgb(54,54,54);}");

	m_pSetBtn = new QPushButton(this);
	m_pSetBtn->setFixedSize(32, 32);
	m_pSetBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/set.svg);border:none}" \
		"QPushButton:hover{" \
		"background-color:rgb(99, 99, 99);" \
		"background-image:url(:/LessWidgetPro/resources/titlebar/set_hover.svg);border:none;}");

	m_pMinBtn = new QPushButton(this);
	m_pMinBtn->setFixedSize(32, 32);
	m_pMinBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/min.svg);border:none}" \
		"QPushButton:hover{" \
		"background-color:rgb(99, 99, 99);" \
		"background-image:url(:/LessWidgetPro/resources/titlebar/min_hover.svg);border:none;}");

	m_pMaxBtn = new QPushButton(this);
	m_pMaxBtn->setFixedSize(32, 32);
	m_pMaxBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/normal.svg);border:none}" \
		"QPushButton:hover{" \
		"background-color:rgb(99, 99, 99);" \
		"background-image:url(:/LessWidgetPro/resources/titlebar/normal_hover.svg);border:none;}");

	m_pCloseBtn = new QPushButton(this);
	m_pCloseBtn->setFixedSize(32, 32);
	m_pCloseBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/close.svg);border:none}" \
		"QPushButton:hover{" \
		"background-color:rgb(99, 99, 99);" \
		"background-image:url(:/LessWidgetPro/resources/titlebar/close_hover.svg);border:none;}");

	QHBoxLayout* pHlay = new QHBoxLayout(this);
	pHlay->addWidget(m_pLogo);
	pHlay->addWidget(m_pTitleTextLabel);
	pHlay->addStretch();
	pHlay->addWidget(m_pSetBtn);
	QSpacerItem* pItem1 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
	pHlay->addSpacerItem(pItem1);

	pHlay->addWidget(m_pMinBtn);
	QSpacerItem* pItem2 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
	pHlay->addSpacerItem(pItem2);
	pHlay->addWidget(m_pMaxBtn);
	
	QSpacerItem* pItem3 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Fixed);
	pHlay->addSpacerItem(pItem3);   // 弹簧每次使用时得new出来，不能重复使用
	pHlay->addWidget(m_pCloseBtn);

	pHlay->setContentsMargins(5, 5, 5, 5);

	connect(m_pMinBtn, &QPushButton::clicked, this, &CTitleBar::onClicked);
	connect(m_pMaxBtn, &QPushButton::clicked, this, &CTitleBar::onClicked);
	connect(m_pCloseBtn, &QPushButton::clicked, this, &CTitleBar::onClicked);
}

void CTitleBar::mousePressEvent(QMouseEvent* event)
{
	if (ReleaseCapture())
	{
		QWidget* pWindow = this->window();
		if (pWindow->isTopLevel())
		{
			SendMessage(HWND(pWindow->winId()), WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
		}
	}
}

void CTitleBar::mouseDoubleClickEvent(QMouseEvent* event)
{
	emit m_pMaxBtn->clicked();
}

void CTitleBar::onClicked()
{
	 QPushButton* pButton = qobject_cast<QPushButton*>(sender());

	 QWidget* pWindow = this->window();

	 if (pButton == m_pMinBtn)
	 {
		 pWindow->showMinimized();
	 }
	 else if (pButton == m_pMaxBtn)
	 {
		 if (pWindow->isMaximized())
		 {
			 pWindow->showNormal();
			 m_pMaxBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/normal.svg);border:none}" \
				 "QPushButton:hover{" \
				 "background-color:rgb(99, 99, 99);" \
				 "background-image:url(:/LessWidgetPro/resources/titlebar/normal_hover.svg);border:none;}");
		 }
		 else
		 {
			 pWindow->showMaximized();
			 m_pMaxBtn->setStyleSheet("QPushButton{background-image:url(:/LessWidgetPro/resources/titlebar/max.svg);border:none}" \
				 "QPushButton:hover{" \
				 "background-color:rgb(99, 99, 99);" \
				 "background-image:url(:/LessWidgetPro/resources/titlebar/max_hover.svg);border:none;}");
		 }
	 }
	 else if (pButton == m_pCloseBtn)
	 {
		 emit sig_close();
	 }
}

