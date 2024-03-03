#pragma once

#include <QDialog>
#include "Commons.h"
#include <QListWidget>
#include <QLabel>
#include <QPushButton>

class ShareScreenDialog : public QDialog
{
	Q_OBJECT

public:
	ShareScreenDialog(QWidget *parent = Q_NULLPTR);
	~ShareScreenDialog();

	void initListWidget(const VecWindowShareInfo& vec);

private:
	void clearMap();

	void mousePressEvent(QMouseEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;

signals:
	void sig_StartShare(int type, void* hwnd);

private slots:
	void onMin();
	void onClose();
	void onCancel();
	void onStartShare();
	void onDesktopItemSelected();
	void onAppItemSelected();

private:
	QWidget* m_pTitleWidget = nullptr;
	QLabel* m_pTitleLabel = nullptr;
	QPushButton* m_pBtnMin = nullptr;
	QPushButton* m_pBtnClose = nullptr;
	QLabel* m_pLabel_Screen = nullptr;
	QListWidget* m_pLWScreen = nullptr;
	QLabel* m_pLabel_App = nullptr;
	QListWidget* m_pLWApp = nullptr;
	QPushButton* m_pBtnCancel = nullptr;
	QPushButton* m_pBtnStart = nullptr;

	//记录鼠标，窗口位置
	QPoint windowPos;
	QPoint mousePos;
	QPoint dPos;

	int m_selectedType = -1;   //0 屏幕，1 应用程序
	map<int, void*> m_mapScreen;
	map<int, void*> m_mapApp;
};
