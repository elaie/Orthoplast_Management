/********************************************************************************
** Form generated from reading UI file 'dis_total_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIS_TOTAL_BILL_DIALOG_H
#define UI_DIS_TOTAL_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dis_total_bill_Dialog
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLabel *label_7;
    QGroupBox *groupBox_4;
    QLabel *label_8;
    QLabel *label_4;
    QGroupBox *groupBox_5;
    QLabel *label_9;
    QLabel *label_6;

    void setupUi(QDialog *dis_total_bill_Dialog)
    {
        if (dis_total_bill_Dialog->objectName().isEmpty())
            dis_total_bill_Dialog->setObjectName(QString::fromUtf8("dis_total_bill_Dialog"));
        dis_total_bill_Dialog->resize(373, 510);
        label_2 = new QLabel(dis_total_bill_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 190, 47, 14));
        groupBox = new QGroupBox(dis_total_bill_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 311, 81));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 30, 181, 31));
        dateEdit->setCalendarPopup(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 30, 101, 31));
        groupBox_2 = new QGroupBox(dis_total_bill_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 130, 311, 81));
        dateEdit_2 = new QDateEdit(groupBox_2);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(10, 30, 181, 31));
        dateEdit_2->setCalendarPopup(true);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 30, 101, 31));
        groupBox_3 = new QGroupBox(dis_total_bill_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 220, 311, 71));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 20, 201, 41));
        groupBox_4 = new QGroupBox(dis_total_bill_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 310, 311, 71));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 121, 41));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 20, 111, 41));
        groupBox_5 = new QGroupBox(dis_total_bill_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(30, 410, 311, 71));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 20, 111, 41));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 20, 111, 41));

        retranslateUi(dis_total_bill_Dialog);

        QMetaObject::connectSlotsByName(dis_total_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *dis_total_bill_Dialog)
    {
        dis_total_bill_Dialog->setWindowTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Display Bill", nullptr));
        label_2->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Search Date:", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("dis_total_bill_Dialog", "dd/MM/yyyy", nullptr));
        pushButton->setText(QCoreApplication::translate("dis_total_bill_Dialog", "Search", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Search Month:", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("dis_total_bill_Dialog", "MM/yyyy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dis_total_bill_Dialog", "Search", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Gross Income:", nullptr));
        label_7->setText(QCoreApplication::translate("dis_total_bill_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Total Income In:", nullptr));
        label_8->setText(QCoreApplication::translate("dis_total_bill_Dialog", "-", nullptr));
        label_4->setText(QCoreApplication::translate("dis_total_bill_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("dis_total_bill_Dialog", "Total Income In:", nullptr));
        label_9->setText(QCoreApplication::translate("dis_total_bill_Dialog", "-", nullptr));
        label_6->setText(QCoreApplication::translate("dis_total_bill_Dialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dis_total_bill_Dialog: public Ui_dis_total_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIS_TOTAL_BILL_DIALOG_H
