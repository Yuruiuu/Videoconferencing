#include "CLoginDlg.h"

CLoginDlg::CLoginDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
}

void CLoginDlg::on_btnJoin_clicked()
{
    QString roomId = ui.lineEdit_roomId->text();
    if (roomId.isEmpty())
        return;
    accept();
}

CLoginDlg::~CLoginDlg()
{
}

QString CLoginDlg::getRoomId() const
{
    return ui.lineEdit_roomId->text();
}
