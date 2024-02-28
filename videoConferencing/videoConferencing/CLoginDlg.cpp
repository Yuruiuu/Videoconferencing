#include "CLoginDlg.h"

CLoginDlg::CLoginDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
}

void CLoginDlg::on_btnJoin_clicked()
{

    accept();
}