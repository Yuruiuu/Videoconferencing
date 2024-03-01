#pragma once

#include <QtWidgets/QDialog>
#include "ui_CLoginDlg.h"

class CLoginDlg : public QDialog
{
    Q_OBJECT

public:
    CLoginDlg(QWidget *parent = Q_NULLPTR);
    ~CLoginDlg();

    QString getRoomId() const;

private slots:
	void on_btnJoin_clicked();

private:
    Ui::CLoginDlgClass ui;
};
