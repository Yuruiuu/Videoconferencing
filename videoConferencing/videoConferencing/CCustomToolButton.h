/*

自定义toolbutton

文本
正常的图标
正常悬浮时的图标
点击后的关闭图标
点击后的关闭图标的悬浮

*/


#pragma once

#include <QToolButton>
#include "commons.h"

class CCustomToolButton : public QToolButton
{
	Q_OBJECT

public:
	CCustomToolButton(QString text, QString normalImageUrl, QString normalImageHoverUrl,
		QString clickedImageUrl, QString clickedImageHoverUrl, bool clicked, QWidget* parent = nullptr);

	~CCustomToolButton();

	bool event(QEvent* e) override;

	void setOpen(bool open)
	{
		m_StateOpen = open;
	}

signals:
	void sig_clicked();

private:
	QString m_text;
	QString m_normalImageUrl;
	QString m_normalImageHoverUrl;
	QString m_clickedImageUrl;
	QString m_clickedImageHoverUrl;

	//该参数用来判定状态是否按下，例如声音、摄像头、录制这些按钮的开启和关闭是两个图片；
	//聊天、设置等按钮的打开和关闭是同一个图片
	//开启设为true, 关闭设为false
	bool m_StateOpen = false;
};
