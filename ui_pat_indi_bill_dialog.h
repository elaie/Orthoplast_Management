/********************************************************************************
** Form generated from reading UI file 'pat_indi_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAT_INDI_BILL_DIALOG_H
#define UI_PAT_INDI_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pat_indi_bill_Dialog
{
public:
    QGroupBox *groupBox_10;
    QLabel *label;
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QGroupBox *groupBox_6;
    QLabel *label_13;
    QGroupBox *groupBox_7;
    QLabel *label_14;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QGroupBox *groupBox_9;
    QLabel *label_16;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QGroupBox *groupBox_5;
    QLabel *label_12;
    QGroupBox *groupBox_8;
    QLabel *label_15;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *pat_indi_bill_Dialog)
    {
        if (pat_indi_bill_Dialog->objectName().isEmpty())
            pat_indi_bill_Dialog->setObjectName(QString::fromUtf8("pat_indi_bill_Dialog"));
        pat_indi_bill_Dialog->resize(435, 642);
        groupBox_10 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(180, 570, 231, 61));
        label = new QLabel(groupBox_10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 47, 14));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));
        groupBox = new QGroupBox(pat_indi_bill_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 541));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 141, 501));
        groupBox_6 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(180, 210, 231, 61));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 211, 31));
        groupBox_7 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(180, 280, 231, 61));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 30, 211, 21));
        groupBox_4 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(180, 80, 231, 61));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 201, 31));
        groupBox_9 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(180, 420, 231, 61));
        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 20, 211, 31));
        groupBox_3 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(180, 10, 231, 61));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 201, 21));
        groupBox_5 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(180, 140, 231, 61));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 201, 21));
        groupBox_8 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 350, 231, 61));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 201, 21));
        groupBox_2 = new QGroupBox(pat_indi_bill_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 490, 231, 71));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 14));
        pushButton = new QPushButton(pat_indi_bill_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 560, 151, 41));

        retranslateUi(pat_indi_bill_Dialog);

        QMetaObject::connectSlotsByName(pat_indi_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *pat_indi_bill_Dialog)
    {
        pat_indi_bill_Dialog->setWindowTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Bill", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "GRAND TOTAL:", nullptr));
        label->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Type:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Discount:", nullptr));
        label_13->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Extra:", nullptr));
        label_14->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Rate:", nullptr));
        label_11->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Total:", nullptr));
        label_16->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Bill No:", nullptr));
        label_10->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "QTY:", nullptr));
        label_12->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Date:", nullptr));
        label_15->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("pat_indi_bill_Dialog", "Remain", nullptr));
        label_2->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "-", nullptr));
        pushButton->setText(QCoreApplication::translate("pat_indi_bill_Dialog", "PAID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pat_indi_bill_Dialog: public Ui_pat_indi_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAT_INDI_BILL_DIALOG_H
