/********************************************************************************
** Form generated from reading UI file 'new_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_BILL_DIALOG_H
#define UI_NEW_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_new_bill_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_10;

    void setupUi(QDialog *new_bill_Dialog)
    {
        if (new_bill_Dialog->objectName().isEmpty())
            new_bill_Dialog->setObjectName(QString::fromUtf8("new_bill_Dialog"));
        new_bill_Dialog->resize(477, 391);
        groupBox = new QGroupBox(new_bill_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 441, 341));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 20, 100, 100));
        pushButton_3->setMinimumSize(QSize(100, 100));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(20, 220, 100, 100));
        pushButton_9->setMinimumSize(QSize(100, 100));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(320, 120, 100, 100));
        pushButton_8->setMinimumSize(QSize(100, 100));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 20, 100, 100));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 120, 100, 100));
        pushButton_6->setMinimumSize(QSize(100, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 120, 100, 100));
        pushButton_7->setMinimumSize(QSize(100, 100));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 120, 100, 100));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 100, 100));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 20, 100, 100));
        pushButton_4->setMinimumSize(QSize(100, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(120, 220, 101, 101));

        retranslateUi(new_bill_Dialog);

        QMetaObject::connectSlotsByName(new_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *new_bill_Dialog)
    {
        new_bill_Dialog->setWindowTitle(QCoreApplication::translate("new_bill_Dialog", "New Bill", nullptr));
        groupBox->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("new_bill_Dialog", "PNO", nullptr));
        pushButton_9->setText(QCoreApplication::translate("new_bill_Dialog", "Others", nullptr));
        pushButton_8->setText(QCoreApplication::translate("new_bill_Dialog", "Package", nullptr));
        pushButton_2->setText(QCoreApplication::translate("new_bill_Dialog", "IPD Physio", nullptr));
        pushButton_6->setText(QCoreApplication::translate("new_bill_Dialog", "Dressing", nullptr));
        pushButton_7->setText(QCoreApplication::translate("new_bill_Dialog", "Room", nullptr));
        pushButton_5->setText(QCoreApplication::translate("new_bill_Dialog", "Accupunture", nullptr));
        pushButton->setText(QCoreApplication::translate("new_bill_Dialog", "OPD Physio", nullptr));
        pushButton_4->setText(QCoreApplication::translate("new_bill_Dialog", "Speech Ther", nullptr));
        pushButton_10->setText(QCoreApplication::translate("new_bill_Dialog", "Multiple", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_bill_Dialog: public Ui_new_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_BILL_DIALOG_H
