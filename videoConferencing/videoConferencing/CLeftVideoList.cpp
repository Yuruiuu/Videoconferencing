#include "CLeftVideoList.h"
#include <QVBoxLayout>

CLeftVideoList::CLeftVideoList(QWidget* p)
	:QWidget(p)
{
	this->setFixedWidth(SMALL_VIDEO_WIDTH+10);
	setAttribute(Qt::WA_StyledBackground);
	setStyleSheet("background-color:rgb(200,200,200)");

	m_pListWidget = new QListWidget(this);
	m_pListWidget->setStyleSheet("background-color:rgb(180,170,160");

	QVBoxLayout* pVlay = new QVBoxLayout(this);
	pVlay->addWidget(m_pListWidget);
	pVlay->setContentsMargins(5, 5, 5, 5);//设置四周距离
}


CLeftVideoList::~CLeftVideoList()
{

}

//添加远程窗口到左侧小窗口
void CLeftVideoList::addVideoWidget(CSmallVideoWidget* pSmall)
{
	QListWidgetItem* pItem = new QListWidgetItem();
	m_pListWidget->addItem(pItem);
	m_pListWidget->setItemWidget(pItem, pSmall);
}
