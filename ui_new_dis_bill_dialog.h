/********************************************************************************
** Form generated from reading UI file 'new_dis_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DIS_BILL_DIALOG_H
#define UI_NEW_DIS_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_new_dis_bill_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;

    void setupUi(QDialog *new_dis_bill_Dialog)
    {
        if (new_dis_bill_Dialog->objectName().isEmpty())
            new_dis_bill_Dialog->setObjectName(QString::fromUtf8("new_dis_bill_Dialog"));
        new_dis_bill_Dialog->resize(487, 400);
        groupBox = new QGroupBox(new_dis_bill_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 441, 351));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 230, 100, 100));
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 130, 100, 100));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 100, 100));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 30, 100, 100));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 130, 100, 100));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 130, 100, 100));
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 30, 100, 100));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 130, 100, 100));
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_8->setStyleSheet(QString::fromUtf8(""));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 30, 100, 100));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(120, 230, 100, 100));
        pushButton_10->setMinimumSize(QSize(100, 100));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(new_dis_bill_Dialog);

        QMetaObject::connectSlotsByName(new_dis_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *new_dis_bill_Dialog)
    {
        new_dis_bill_Dialog->setWindowTitle(QCoreApplication::translate("new_dis_bill_Dialog", "Display Bill", nullptr));
        groupBox->setTitle(QString());
        pushButton_9->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Others", nullptr));
        pushButton_6->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Dressing", nullptr));
        pushButton->setText(QCoreApplication::translate("new_dis_bill_Dialog", "OPD Physio", nullptr));
        pushButton_4->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Speech Ther", nullptr));
        pushButton_5->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Accupunture", nullptr));
        pushButton_7->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Room", nullptr));
        pushButton_2->setText(QCoreApplication::translate("new_dis_bill_Dialog", "IPD Physio", nullptr));
        pushButton_8->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Package", nullptr));
        pushButton_3->setText(QCoreApplication::translate("new_dis_bill_Dialog", "PNO", nullptr));
        pushButton_10->setText(QCoreApplication::translate("new_dis_bill_Dialog", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_dis_bill_Dialog: public Ui_new_dis_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DIS_BILL_DIALOG_H
