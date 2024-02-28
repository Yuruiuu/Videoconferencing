#pragma once

#include <QtWidgets/QDialog>
#include "ui_CLoginDlg.h"

class CLoginDlg : public QDialog
{
    Q_OBJECT

public:
    CLoginDlg(QWidget *parent = Q_NULLPTR);

private slots:
	void on_btnJoin_clicked();

private:
    Ui::CLoginDlgClass ui;
};
