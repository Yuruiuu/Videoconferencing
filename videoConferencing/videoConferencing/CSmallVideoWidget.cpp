#include "CSmallVideoWidget.h"
CSmallVideoWidget::CSmallVideoWidget(QWidget* p)
	:QWidget(p)
{
	setAttribute(Qt::WA_OpaquePaintEvent);//��ֹ������˸
	setFixedSize(SMALL_VIDEO_WIDTH, SMALL_VIDEO_HEIGHT);
}
CSmallVideoWidget::~CSmallVideoWidget()
{

}