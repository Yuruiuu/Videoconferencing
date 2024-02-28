/********************************************************************************
** Form generated from reading UI file 'CLoginDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOGINDLG_H
#define UI_CLOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLoginDlgClass
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnNetStatus;
    QPushButton *btnSet;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_logo;
    QLabel *label_name;
    QLabel *label_3;
    QLineEdit *lineEdit_roomId;
    QLabel *label_4;
    QLineEdit *lineEdit_pwd;
    QLabel *label_5;
    QLineEdit *lineEdit_userName;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *btnJoin;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnMin;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *CLoginDlgClass)
    {
        if (CLoginDlgClass->objectName().isEmpty())
            CLoginDlgClass->setObjectName(QString::fromUtf8("CLoginDlgClass"));
        CLoginDlgClass->resize(718, 667);
        widget = new QWidget(CLoginDlgClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 708, 602));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(400, 0));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnNetStatus = new QPushButton(widget1);
        btnNetStatus->setObjectName(QString::fromUtf8("btnNetStatus"));

        horizontalLayout_3->addWidget(btnNetStatus);

        btnSet = new QPushButton(widget1);
        btnSet->setObjectName(QString::fromUtf8("btnSet"));

        horizontalLayout_3->addWidget(btnSet);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_logo = new QLabel(widget1);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));

        horizontalLayout_4->addWidget(label_logo);

        label_name = new QLabel(widget1);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout_4->addWidget(label_name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_roomId = new QLineEdit(widget1);
        lineEdit_roomId->setObjectName(QString::fromUtf8("lineEdit_roomId"));

        verticalLayout_2->addWidget(lineEdit_roomId);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_pwd = new QLineEdit(widget1);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));

        verticalLayout_2->addWidget(lineEdit_pwd);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_userName = new QLineEdit(widget1);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));

        verticalLayout_2->addWidget(lineEdit_userName);

        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        btnJoin = new QPushButton(widget1);
        btnJoin->setObjectName(QString::fromUtf8("btnJoin"));

        verticalLayout_2->addWidget(btnJoin);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(300, 600));
        widget_2->setMaximumSize(QSize(540, 854));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnMin = new QPushButton(widget_2);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));

        horizontalLayout_2->addWidget(btnMin);

        btnClose = new QPushButton(widget_2);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 548, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget_2);


        retranslateUi(CLoginDlgClass);

        QMetaObject::connectSlotsByName(CLoginDlgClass);
    } // setupUi

    void retranslateUi(QDialog *CLoginDlgClass)
    {
        CLoginDlgClass->setWindowTitle(QApplication::translate("CLoginDlgClass", "CLoginDlg", nullptr));
        btnNetStatus->setText(QApplication::translate("CLoginDlgClass", "PushButton", nullptr));
        btnSet->setText(QApplication::translate("CLoginDlgClass", "PushButton", nullptr));
        label_logo->setText(QApplication::translate("CLoginDlgClass", "TextLabel", nullptr));
        label_name->setText(QApplication::translate("CLoginDlgClass", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("CLoginDlgClass", "\346\210\277\351\227\264\345\217\267", nullptr));
        label_4->setText(QApplication::translate("CLoginDlgClass", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QApplication::translate("CLoginDlgClass", "\347\224\250\346\210\267\345\220\215", nullptr));
        checkBox->setText(QApplication::translate("CLoginDlgClass", "\345\274\200\345\220\257\346\221\204\345\203\217\345\244\264", nullptr));
        checkBox_2->setText(QApplication::translate("CLoginDlgClass", "\345\274\200\345\220\257\351\272\246\345\205\213\351\243\216", nullptr));
        btnJoin->setText(QApplication::translate("CLoginDlgClass", "\345\212\240\345\205\245\344\274\232\350\256\256", nullptr));
        btnMin->setText(QApplication::translate("CLoginDlgClass", "PushButton", nullptr));
        btnClose->setText(QApplication::translate("CLoginDlgClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CLoginDlgClass: public Ui_CLoginDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOGINDLG_H
