#pragma once

#include <QtWidgets/QDialog>
#include "ui_CLoginDlg.h"
#include <QMouseEvent>

class CLoginDlg : public QDialog
{
    Q_OBJECT

public:
    CLoginDlg(QWidget *parent = Q_NULLPTR);
    ~CLoginDlg();

    QString getRoomId() const;

private:
	void mousePressEvent(QMouseEvent* event) override;
	void mouseMoveEvent(QMouseEvent* event) override;

private slots:
	void on_btnJoin_clicked();

private:
    Ui::CLoginDlgClass ui;

	QPoint diff_pos;  // 鼠标和窗口的相对位移
	QPoint window_pos;
	QPoint mouse_pos;
};
