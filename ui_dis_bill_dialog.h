/********************************************************************************
** Form generated from reading UI file 'dis_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIS_BILL_DIALOG_H
#define UI_DIS_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dis_bill_Dialog
{
public:
    QGroupBox *groupBox;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QGroupBox *groupBox_4;
    QLabel *label_11;
    QGroupBox *groupBox_5;
    QLabel *label_12;
    QGroupBox *groupBox_6;
    QLabel *label_13;
    QGroupBox *groupBox_7;
    QLabel *label_14;
    QGroupBox *groupBox_8;
    QLabel *label_15;
    QGroupBox *groupBox_9;
    QLabel *label_16;
    QDateEdit *dateEdit;
    QPushButton *search;
    QGroupBox *groupBox_10;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_11;
    QLabel *label_4;

    void setupUi(QDialog *dis_bill_Dialog)
    {
        if (dis_bill_Dialog->objectName().isEmpty())
            dis_bill_Dialog->setObjectName(QString::fromUtf8("dis_bill_Dialog"));
        dis_bill_Dialog->resize(423, 721);
        groupBox = new QGroupBox(dis_bill_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 161, 581));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 141, 431));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 530, 141, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 202, 192);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 470, 141, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 255, 203);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 500, 141, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 212);"));
        groupBox_2 = new QGroupBox(dis_bill_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 10, 231, 61));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 30, 211, 24));
        groupBox_3 = new QGroupBox(dis_bill_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(180, 80, 231, 61));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 30, 201, 21));
        groupBox_4 = new QGroupBox(dis_bill_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(180, 150, 231, 61));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 20, 201, 31));
        groupBox_5 = new QGroupBox(dis_bill_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(180, 210, 231, 61));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 201, 21));
        groupBox_6 = new QGroupBox(dis_bill_Dialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(180, 280, 231, 61));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 211, 31));
        groupBox_7 = new QGroupBox(dis_bill_Dialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(180, 350, 231, 61));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 30, 211, 21));
        groupBox_8 = new QGroupBox(dis_bill_Dialog);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(180, 420, 231, 61));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 201, 21));
        groupBox_9 = new QGroupBox(dis_bill_Dialog);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(180, 490, 231, 61));
        label_16 = new QLabel(groupBox_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 20, 211, 31));
        dateEdit = new QDateEdit(dis_bill_Dialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 10, 141, 31));
        dateEdit->setCalendarPopup(true);
        search = new QPushButton(dis_bill_Dialog);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(20, 50, 141, 31));
        groupBox_10 = new QGroupBox(dis_bill_Dialog);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(180, 560, 231, 61));
        label = new QLabel(groupBox_10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 47, 14));
        label_2 = new QLabel(dis_bill_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 47, 14));
        label_3 = new QLabel(dis_bill_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 90, 51, 16));
        groupBox_11 = new QGroupBox(dis_bill_Dialog);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(180, 630, 231, 51));
        label_4 = new QLabel(groupBox_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 47, 14));

        retranslateUi(dis_bill_Dialog);

        QMetaObject::connectSlotsByName(dis_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *dis_bill_Dialog)
    {
        dis_bill_Dialog->setWindowTitle(QCoreApplication::translate("dis_bill_Dialog", "Display Bill", nullptr));
        groupBox->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Names:", nullptr));
        pushButton->setText(QCoreApplication::translate("dis_bill_Dialog", "Delete", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dis_bill_Dialog", "Refresh", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dis_bill_Dialog", "Edit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Name:", nullptr));
        label_9->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Bill No:", nullptr));
        label_10->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Rate:", nullptr));
        label_11->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("dis_bill_Dialog", "QTY:", nullptr));
        label_12->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Discount:", nullptr));
        label_13->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Extra:", nullptr));
        label_14->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Date:", nullptr));
        label_15->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Total:", nullptr));
        label_16->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("dis_bill_Dialog", "MM/yyyy", nullptr));
        search->setText(QCoreApplication::translate("dis_bill_Dialog", "Search", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Remain:", nullptr));
        label->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        label_2->setText(QCoreApplication::translate("dis_bill_Dialog", "COUNT:", nullptr));
        label_3->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("dis_bill_Dialog", "Monthly Total:", nullptr));
        label_4->setText(QCoreApplication::translate("dis_bill_Dialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dis_bill_Dialog: public Ui_dis_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIS_BILL_DIALOG_H
