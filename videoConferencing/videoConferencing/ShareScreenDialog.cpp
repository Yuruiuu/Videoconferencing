/*

显示准备共享的桌面和窗口

*/

#include "ShareScreenDialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMouseEvent>
#include "commons.h"

ShareScreenDialog::ShareScreenDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::SubWindow | Qt::Tool);
	setAttribute(Qt::WA_StyledBackground);

	m_pTitleWidget = new QWidget(this);
	m_pTitleWidget->setFixedHeight(42);
	m_pTitleWidget->setStyleSheet("background-color:rgb(54,54,54)");

	m_pTitleLabel = new QLabel(this);
	m_pTitleLabel->setStyleSheet("font-family:Microsoft YaHei;font-size:24px;color:#FFFFFF;background-color:#363636;");
	m_pTitleLabel->setText(u8"请选择需要共享的内容");

	QString qss1 = "QPushButton{background-image:url(:/mainwidget/resources/mainwidget/sharescreen/min.svg); \
		background-position:center; \
		background-repeat:no-repeat; \
		border:none} \
		QPushButton:hover{background-color:rgb(104,104,104);background-image:url(:/mainwidget/resources/mainwidget/sharescreen/min.svg)}";

	m_pBtnMin = new QPushButton(this);
	m_pBtnMin->setFixedSize(32, 32);
	m_pBtnMin->setStyleSheet(qss1);

	QString qss2 = "QPushButton{background-image:url(:/mainwidget/resources/mainwidget/sharescreen/close.svg); \
		background-position:center; \
		background-repeat:no-repeat; \
		border:none} \
		QPushButton:hover{background-color:rgb(104,104,104); \
		background-image:url(:/mainwidget/resources/mainwidget/sharescreen/close.svg)}";

	m_pBtnClose = new QPushButton(m_pTitleWidget);
	m_pBtnClose->setFixedSize(32, 32);
	m_pBtnClose->setStyleSheet(qss2);

	QHBoxLayout* pTitleHLay = new QHBoxLayout(m_pTitleWidget);
	pTitleHLay->addWidget(m_pTitleLabel);
	pTitleHLay->addStretch();

	pTitleHLay->addWidget(m_pBtnMin);
	pTitleHLay->addWidget(m_pBtnClose);
	pTitleHLay->setContentsMargins(5, 5, 5, 5);
	m_pTitleWidget->setLayout(pTitleHLay);

	QVBoxLayout* pMainVLay = new QVBoxLayout(this);
	pMainVLay->setSpacing(5);
	pMainVLay->addWidget(m_pTitleWidget);
	pMainVLay->setSpacing(10);

	m_pLabel_Screen = new QLabel(this);
	m_pLabel_Screen->setText(u8"桌面");
	m_pLabel_Screen->setFixedHeight(32);

	int vScrollBarWidth = 9;
	QString qssLW = QString("QScrollBar{width:%1px;background:rgba(255, 255, 255,100%);margin:0px, 0px, 0px, 0px;}\
              QScrollBar::handle:vertical{width:8px;background:rgba(162, 163, 165, 100%);border-radius:4px;min-height:60;}\
              QScrollBar::handle:vertical:hover{width:8px;background:rgba(115,118,118, 100%);border-radius:4px;min-height:60;}\
              QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{background:rgba(255, 255, 255, 100%);border-radius:4px;}\
              QScrollBar::top-arrow:vertical,QScrollBar::bottom-arrow:vertical{border: none;background: none;color: none;}\
              QScrollBar::add-line:vertical{border:none;background:none;}\
              QScrollBar::sub-line:vertical{border:none;background:none;}\
              QListWidget{background-color:rgb(255,255,255);border-style:solid;border-right-width:1px; \
              border-right-color:rgb(202, 199, 198);}").arg(QString::number(vScrollBarWidth));

	int LWSPACE = 20;
	m_pLWScreen = new QListWidget(this);
	m_pLWScreen->setSpacing(LWSPACE);  //间距
	int w1 = SHARE_WINDOW_ITEM_WIDTH * 4 + 5 * LWSPACE;
	int h1 = SHARE_WINDOW_ITEM_HEIGHT + 45 + LWSPACE * 2  + 10;
	m_pLWScreen->setFixedSize(w1, h1);
	m_pLWScreen->setIconSize(QSize(SHARE_WINDOW_ITEM_WIDTH, SHARE_WINDOW_ITEM_HEIGHT + 45));
	m_pLWScreen->setViewMode(QListView::IconMode);
	m_pLWScreen->setWrapping(true);						//自动换行
	m_pLWScreen->setFlow(QListView::LeftToRight);		    //从左到右布局
	m_pLWScreen->setStyleSheet(qssLW);

	m_pLabel_App = new QLabel(this);
	m_pLabel_App->setFixedHeight(32);
	m_pLabel_App->setText(u8"应用程序");

	m_pLWApp = new QListWidget(this);
	m_pLWApp->setSpacing(LWSPACE); //间距
	int w2 = w1;
	int h2 = (SHARE_WINDOW_ITEM_HEIGHT + 45) * 2 + 4 * LWSPACE;
	m_pLWApp->setFixedSize(w2, h2);
	m_pLWApp->setIconSize(QSize(SHARE_WINDOW_ITEM_WIDTH, SHARE_WINDOW_ITEM_HEIGHT + 45));
	m_pLWApp->setViewMode(QListView::IconMode);
	m_pLWApp->setWrapping(true);				    //自动换行
	m_pLWApp->setFlow(QListView::LeftToRight);		//从左到右布局
	m_pLWApp->setStyleSheet(qssLW);

	pMainVLay->addWidget(m_pLabel_Screen);
	pMainVLay->setSpacing(5);
	pMainVLay->addWidget(m_pLWScreen);
	pMainVLay->setSpacing(10);
	pMainVLay->addWidget(m_pLabel_App);
	pMainVLay->setSpacing(5);
	pMainVLay->addWidget(m_pLWApp);
	pMainVLay->setSpacing(10);

	m_pBtnCancel = new QPushButton(this);
	m_pBtnCancel->setText(u8"取消");
	m_pBtnCancel->setFixedHeight(48);

	m_pBtnStart = new QPushButton(this);
	m_pBtnStart->setText(u8"开始共享");
	m_pBtnStart->setFixedHeight(48);

	QHBoxLayout* pBottomHLay = new QHBoxLayout(this);
	pBottomHLay->addStretch();
	pBottomHLay->addWidget(m_pBtnCancel);
	pBottomHLay->addWidget(m_pBtnStart);
	pBottomHLay->setContentsMargins(0, 0, 0, 0);
	
	pMainVLay->addLayout(pBottomHLay);
	pMainVLay->setContentsMargins(0, 0, 0, 0);
	setLayout(pMainVLay);

	connect(m_pBtnMin, &QPushButton::clicked, this, &ShareScreenDialog::onMin);
	connect(m_pBtnClose, &QPushButton::clicked, this, &ShareScreenDialog::onClose);
	connect(m_pBtnCancel, &QPushButton::clicked, this, &ShareScreenDialog::onCancel);
	connect(m_pBtnStart, &QPushButton::clicked, this, &ShareScreenDialog::onStartShare);

	connect(m_pLWScreen, &QListWidget::itemClicked, this, &ShareScreenDialog::onDesktopItemSelected);
	connect(m_pLWApp, &QListWidget::itemClicked, this, &ShareScreenDialog::onAppItemSelected);
}

ShareScreenDialog::~ShareScreenDialog()
{
}

void ShareScreenDialog::initListWidget(const VecWindowShareInfo& vec)
{
	int desktopId = 0;
	int appId = 0;

	for (auto ele : vec)
	{
		string namestr(ele.name);
		QListWidgetItem* it1 = new QListWidgetItem(QIcon(ele.pixmap), QString::fromStdString(namestr));
		it1->setSizeHint(QSize(SHARE_WINDOW_ITEM_WIDTH, SHARE_WINDOW_ITEM_HEIGHT + 45));

		if (ele.windowType == window_share_info::Screen)
		{
			m_pLWScreen->addItem(it1);

			m_mapScreen[desktopId] = ele.hwnd;
			desktopId++;
		}
		else
		{
			m_pLWApp->addItem(it1);
			m_mapApp[appId] = ele.hwnd;
			appId++;
		}
	}
}

void ShareScreenDialog::clearMap()
{
	m_mapScreen.clear();
	m_mapScreen.clear();
}

void ShareScreenDialog::mousePressEvent(QMouseEvent* event)
{
	this->windowPos = this->pos();       // 获得部件当前位置
	this->mousePos = event->globalPos(); // 获得鼠标位置
	this->dPos = mousePos - windowPos;   // 移动后部件所在的位置
}

void ShareScreenDialog::mouseMoveEvent(QMouseEvent* event)
{
	this->move(event->globalPos() - this->dPos);
}

void ShareScreenDialog::onMin()
{
	this->showMinimized();
}

void ShareScreenDialog::onClose()
{
	close();
}

void ShareScreenDialog::onCancel()
{
	close();
}

void ShareScreenDialog::onStartShare()
{
	void* hwnd = NULL;

	switch (m_selectedType)
	{
	case 0:
	{
		int shareIndex = m_pLWScreen->currentIndex().row();
		hwnd = m_mapScreen[shareIndex];//获取窗口句柄
	}
	break;

	case 1:
	{
		int shareIndex = m_pLWApp->currentIndex().row();
		hwnd = m_mapApp[shareIndex];//获取窗口句柄
	}
	break;

	default:
		break;
	}

	emit sig_StartShare(m_selectedType, hwnd);
	clearMap();
	close();
}

void ShareScreenDialog::onDesktopItemSelected()
{
	m_selectedType = 0;
}

void ShareScreenDialog::onAppItemSelected()
{
	m_selectedType = 1;
}