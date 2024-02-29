#include "CLeftVideoList.h"

CLeftVideoList::CLeftVideoList(QWidget* p)
	:QWidget(p)
{
	this->setFixedWidth(300);
	setAttribute(Qt::WA_StyledBackground);
	setStyleSheet("background-color:rgb(200,200,200)");
}


CLeftVideoList::~CLeftVideoList()
{

}
