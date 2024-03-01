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
    QHBoxLayout *horizontalLayout;
    QWidget *widget_left;
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
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_name;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_roomId;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_4;
    QLineEdit *lineEdit_pwd;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_5;
    QLineEdit *lineEdit_userName;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_10;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *btnJoin;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_right;
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
        CLoginDlgClass->resize(724, 618);
        horizontalLayout = new QHBoxLayout(CLoginDlgClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_left = new QWidget(CLoginDlgClass);
        widget_left->setObjectName(QString::fromUtf8("widget_left"));
        widget_left->setMinimumSize(QSize(400, 0));
        verticalLayout_3 = new QVBoxLayout(widget_left);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnNetStatus = new QPushButton(widget_left);
        btnNetStatus->setObjectName(QString::fromUtf8("btnNetStatus"));

        horizontalLayout_3->addWidget(btnNetStatus);

        btnSet = new QPushButton(widget_left);
        btnSet->setObjectName(QString::fromUtf8("btnSet"));

        horizontalLayout_3->addWidget(btnSet);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_logo = new QLabel(widget_left);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));

        horizontalLayout_4->addWidget(label_logo);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_name = new QLabel(widget_left);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        horizontalLayout_4->addWidget(label_name);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        label_3 = new QLabel(widget_left);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        lineEdit_roomId = new QLineEdit(widget_left);
        lineEdit_roomId->setObjectName(QString::fromUtf8("lineEdit_roomId"));

        verticalLayout_2->addWidget(lineEdit_roomId);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        label_4 = new QLabel(widget_left);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_4);

        lineEdit_pwd = new QLineEdit(widget_left);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));

        verticalLayout_2->addWidget(lineEdit_pwd);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_8);

        label_5 = new QLabel(widget_left);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(label_5);

        lineEdit_userName = new QLineEdit(widget_left);
        lineEdit_userName->setObjectName(QString::fromUtf8("lineEdit_userName"));

        verticalLayout_2->addWidget(lineEdit_userName);

        verticalSpacer_9 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_9);

        checkBox = new QCheckBox(widget_left);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        verticalSpacer_10 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_10);

        checkBox_2 = new QCheckBox(widget_left);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        verticalSpacer_6 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        btnJoin = new QPushButton(widget_left);
        btnJoin->setObjectName(QString::fromUtf8("btnJoin"));

        verticalLayout_2->addWidget(btnJoin);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget_left);

        widget_right = new QWidget(CLoginDlgClass);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        widget_right->setMinimumSize(QSize(300, 600));
        widget_right->setMaximumSize(QSize(540, 854));
        verticalLayout = new QVBoxLayout(widget_right);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnMin = new QPushButton(widget_right);
        btnMin->setObjectName(QString::fromUtf8("btnMin"));

        horizontalLayout_2->addWidget(btnMin);

        btnClose = new QPushButton(widget_right);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 548, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget_right);


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
