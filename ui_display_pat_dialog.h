/********************************************************************************
** Form generated from reading UI file 'display_pat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_PAT_DIALOG_H
#define UI_DISPLAY_PAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_display_pat_Dialog
{
public:
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *NAMEE;
    QGroupBox *groupBox_3;
    QLabel *GENDERE;
    QGroupBox *groupBox_4;
    QLabel *ADDE;
    QGroupBox *groupBox_5;
    QLabel *PHNOE;
    QGroupBox *groupBox_6;
    QLabel *EMAILE;
    QGroupBox *groupBox_7;
    QLabel *BLOODE;
    QGroupBox *groupBox_8;
    QLabel *DOBE;
    QGroupBox *groupBox_9;
    QLabel *REFBY;
    QGroupBox *groupBox_10;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *display_pat_Dialog)
    {
        if (display_pat_Dialog->objectName().isEmpty())
            display_pat_Dialog->setObjectName(QString::fromUtf8("display_pat_Dialog"));
        display_pat_Dialog->resize(624, 605);
        groupBox = new QGroupBox(display_pat_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 331, 71));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 221, 31));
        comboBox->setEditable(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 30, 81, 31));
        groupBox_2 = new QGroupBox(display_pat_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 30, 211, 61));
        NAMEE = new QLabel(groupBox_2);
        NAMEE->setObjectName(QString::fromUtf8("NAMEE"));
        NAMEE->setGeometry(QRect(10, 20, 191, 31));
        groupBox_3 = new QGroupBox(display_pat_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(390, 100, 211, 61));
        GENDERE = new QLabel(groupBox_3);
        GENDERE->setObjectName(QString::fromUtf8("GENDERE"));
        GENDERE->setGeometry(QRect(10, 20, 191, 31));
        groupBox_4 = new QGroupBox(display_pat_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(390, 170, 211, 61));
        ADDE = new QLabel(groupBox_4);
        ADDE->setObjectName(QString::fromUtf8("ADDE"));
        ADDE->setGeometry(QRect(10, 20, 191, 31));
        groupBox_5 = new QGroupBox(display_pat_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(390, 240, 211, 61));
        PHNOE = new QLabel(groupBox_5);
        PHNOE->setObjectName(QString::fromUtf8("PHNOE"));
        PHNOE->setGeometry(QRect(10, 20, 191, 31));
        groupBox_6 = new QGroupBox(display_pat_Dialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(390, 310, 211, 61));
        EMAILE = new QLabel(groupBox_6);
        EMAILE->setObjectName(QString::fromUtf8("EMAILE"));
        EMAILE->setGeometry(QRect(10, 20, 181, 31));
        groupBox_7 = new QGroupBox(display_pat_Dialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(390, 380, 211, 61));
        BLOODE = new QLabel(groupBox_7);
        BLOODE->setObjectName(QString::fromUtf8("BLOODE"));
        BLOODE->setGeometry(QRect(10, 20, 181, 31));
        groupBox_8 = new QGroupBox(display_pat_Dialog);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(390, 450, 211, 61));
        DOBE = new QLabel(groupBox_8);
        DOBE->setObjectName(QString::fromUtf8("DOBE"));
        DOBE->setGeometry(QRect(10, 20, 181, 31));
        groupBox_9 = new QGroupBox(display_pat_Dialog);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(390, 520, 211, 61));
        REFBY = new QLabel(groupBox_9);
        REFBY->setObjectName(QString::fromUtf8("REFBY"));
        REFBY->setGeometry(QRect(10, 20, 181, 31));
        groupBox_10 = new QGroupBox(display_pat_Dialog);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(20, 100, 291, 481));
        pushButton_4 = new QPushButton(groupBox_10);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 420, 121, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 255, 210);"));
        pushButton_4->setAutoDefault(false);
        pushButton_2 = new QPushButton(groupBox_10);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 370, 121, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 255, 251);"));
        pushButton_2->setAutoDefault(false);
        listWidget = new QListWidget(groupBox_10);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 261, 321));
        pushButton_3 = new QPushButton(groupBox_10);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 420, 131, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 211, 217);"));
        pushButton_3->setAutoDefault(false);
        pushButton_5 = new QPushButton(groupBox_10);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 370, 131, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 208);"));

        retranslateUi(display_pat_Dialog);

        QMetaObject::connectSlotsByName(display_pat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *display_pat_Dialog)
    {
        display_pat_Dialog->setWindowTitle(QCoreApplication::translate("display_pat_Dialog", "Display Patient's Information", nullptr));
        groupBox->setTitle(QCoreApplication::translate("display_pat_Dialog", "Search Name:", nullptr));
        comboBox->setItemText(0, QString());

        pushButton->setText(QCoreApplication::translate("display_pat_Dialog", "Search", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("display_pat_Dialog", "Name:", nullptr));
        NAMEE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("display_pat_Dialog", "Gender:", nullptr));
        GENDERE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("display_pat_Dialog", "Address:", nullptr));
        ADDE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("display_pat_Dialog", "Phone Number:", nullptr));
        PHNOE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("display_pat_Dialog", "Email:", nullptr));
        EMAILE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("display_pat_Dialog", "Blood Group:", nullptr));
        BLOODE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("display_pat_Dialog", "Age:", nullptr));
        DOBE->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("display_pat_Dialog", "Referred By:", nullptr));
        REFBY->setText(QCoreApplication::translate("display_pat_Dialog", "-", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("display_pat_Dialog", "Patient's List", nullptr));
        pushButton_4->setText(QCoreApplication::translate("display_pat_Dialog", "Refresh", nullptr));
        pushButton_2->setText(QCoreApplication::translate("display_pat_Dialog", "Details", nullptr));
        pushButton_3->setText(QCoreApplication::translate("display_pat_Dialog", "Delete", nullptr));
        pushButton_5->setText(QCoreApplication::translate("display_pat_Dialog", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display_pat_Dialog: public Ui_display_pat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_PAT_DIALOG_H
