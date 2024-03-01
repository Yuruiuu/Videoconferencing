/*
	左边视频列表窗口
*/

#pragma once
#include <QWidget>
#include <QListWidget>
#include "commons.h"
#include "CSmallVideoWidget.h"
class CLeftVideoList:public QWidget 
{
	Q_OBJECT
public:
	CLeftVideoList(QWidget* p = nullptr);
	~CLeftVideoList();

	void addVideoWidget(CSmallVideoWidget* pSmall);
private:
	QListWidget* m_pListWidget = nullptr;
};

