/********************************************************************************
** Form generated from reading UI file 'dis_app_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIS_APP_DIALOG_H
#define UI_DIS_APP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dis_app_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton_6;
    QListWidget *listWidget_2;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QListWidget *listWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QGroupBox *groupBox_4;
    QLabel *label_7;
    QGroupBox *groupBox_5;
    QLabel *label_8;
    QGroupBox *groupBox_6;
    QLabel *label_9;
    QGroupBox *groupBox_7;
    QLabel *label_10;

    void setupUi(QDialog *Dis_app_Dialog)
    {
        if (Dis_app_Dialog->objectName().isEmpty())
            Dis_app_Dialog->setObjectName(QString::fromUtf8("Dis_app_Dialog"));
        Dis_app_Dialog->resize(549, 547);
        tabWidget = new QTabWidget(Dis_app_Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 180, 251, 341));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 270, 221, 31));
        listWidget_2 = new QListWidget(tab);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(11, 11, 221, 221));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 240, 221, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(11, 11, 221, 221));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 240, 221, 31));
        pushButton_3->setAutoDefault(false);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 270, 221, 31));
        pushButton_4->setAutoDefault(false);
        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(Dis_app_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 511, 71));
        groupBox->setMinimumSize(QSize(270, 50));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 30, 391, 30));
        dateEdit->setMinimumSize(QSize(250, 30));
        dateEdit->setCalendarPopup(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 30, 91, 31));
        groupBox_2 = new QGroupBox(Dis_app_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 90, 511, 71));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 391, 31));
        comboBox->setEditable(true);
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 30, 91, 31));
        groupBox_3 = new QGroupBox(Dis_app_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 190, 241, 61));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 221, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_4 = new QGroupBox(Dis_app_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(290, 260, 241, 61));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 20, 221, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_5 = new QGroupBox(Dis_app_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(290, 330, 241, 61));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 211, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_6 = new QGroupBox(Dis_app_Dialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(290, 390, 241, 61));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 201, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_7 = new QGroupBox(Dis_app_Dialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(290, 460, 241, 61));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 20, 221, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));

        retranslateUi(Dis_app_Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dis_app_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dis_app_Dialog)
    {
        Dis_app_Dialog->setWindowTitle(QCoreApplication::translate("Dis_app_Dialog", "Display Appointments", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dis_app_Dialog", "Refresh", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dis_app_Dialog", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dis_app_Dialog", "Doctor", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dis_app_Dialog", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dis_app_Dialog", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Dis_app_Dialog", "Patient", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Search by Date:", nullptr));
        pushButton->setText(QCoreApplication::translate("Dis_app_Dialog", "Search", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Search by Name:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dis_app_Dialog", "Search", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Patient's Name:", nullptr));
        label_6->setText(QCoreApplication::translate("Dis_app_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Doctor's Name:", nullptr));
        label_7->setText(QCoreApplication::translate("Dis_app_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Visit Type:", nullptr));
        label_8->setText(QCoreApplication::translate("Dis_app_Dialog", "-", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Date:", nullptr));
        label_9->setText(QCoreApplication::translate("Dis_app_Dialog", "-", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Dis_app_Dialog", "Time:", nullptr));
        label_10->setText(QCoreApplication::translate("Dis_app_Dialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dis_app_Dialog: public Ui_Dis_app_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIS_APP_DIALOG_H
