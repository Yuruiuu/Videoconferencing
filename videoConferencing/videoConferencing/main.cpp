#include "CLoginDlg.h"
#include <QtWidgets/QApplication>
#include "CMainWidget.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    CLoginDlg w;

    CMainWidget m;
    if (w.exec() == QDialog::Accepted)
    {
        m.show();
        return a.exec();
    }
    else
    {
        return 0;
    }

    return 0;
}
