/********************************************************************************
** Form generated from reading UI file 'patient_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENT_INFO_DIALOG_H
#define UI_PATIENT_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Patient_Info_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Physio;
    QPushButton *CoM;
    QPushButton *Med;
    QPushButton *Finds;
    QPushButton *Invest;
    QWidget *tab_2;
    QPushButton *Physio_2;
    QPushButton *Med_2;
    QPushButton *CoM_2;
    QPushButton *Finds_2;
    QPushButton *Invest_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Patient_Info_Dialog)
    {
        if (Patient_Info_Dialog->objectName().isEmpty())
            Patient_Info_Dialog->setObjectName(QString::fromUtf8("Patient_Info_Dialog"));
        Patient_Info_Dialog->resize(475, 294);
        tabWidget = new QTabWidget(Patient_Info_Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 431, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Physio = new QPushButton(tab);
        Physio->setObjectName(QString::fromUtf8("Physio"));
        Physio->setGeometry(QRect(10, 120, 101, 101));
        Physio->setMinimumSize(QSize(85, 85));
        CoM = new QPushButton(tab);
        CoM->setObjectName(QString::fromUtf8("CoM"));
        CoM->setGeometry(QRect(110, 20, 101, 101));
        CoM->setMinimumSize(QSize(85, 85));
        Med = new QPushButton(tab);
        Med->setObjectName(QString::fromUtf8("Med"));
        Med->setGeometry(QRect(10, 20, 101, 101));
        Med->setMinimumSize(QSize(85, 85));
        Finds = new QPushButton(tab);
        Finds->setObjectName(QString::fromUtf8("Finds"));
        Finds->setGeometry(QRect(210, 20, 101, 101));
        Finds->setMinimumSize(QSize(85, 85));
        Finds->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        Invest = new QPushButton(tab);
        Invest->setObjectName(QString::fromUtf8("Invest"));
        Invest->setGeometry(QRect(310, 20, 101, 101));
        Invest->setMinimumSize(QSize(85, 85));
        Invest->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Physio_2 = new QPushButton(tab_2);
        Physio_2->setObjectName(QString::fromUtf8("Physio_2"));
        Physio_2->setGeometry(QRect(10, 120, 101, 101));
        Physio_2->setMinimumSize(QSize(85, 85));
        Med_2 = new QPushButton(tab_2);
        Med_2->setObjectName(QString::fromUtf8("Med_2"));
        Med_2->setGeometry(QRect(10, 20, 101, 101));
        Med_2->setMinimumSize(QSize(85, 85));
        Med_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        CoM_2 = new QPushButton(tab_2);
        CoM_2->setObjectName(QString::fromUtf8("CoM_2"));
        CoM_2->setGeometry(QRect(110, 20, 101, 101));
        CoM_2->setMinimumSize(QSize(85, 85));
        CoM_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        Finds_2 = new QPushButton(tab_2);
        Finds_2->setObjectName(QString::fromUtf8("Finds_2"));
        Finds_2->setGeometry(QRect(210, 20, 101, 101));
        Finds_2->setMinimumSize(QSize(85, 85));
        Invest_2 = new QPushButton(tab_2);
        Invest_2->setObjectName(QString::fromUtf8("Invest_2"));
        Invest_2->setGeometry(QRect(310, 20, 101, 101));
        Invest_2->setMinimumSize(QSize(85, 85));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 120, 101, 101));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Patient_Info_Dialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Patient_Info_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Patient_Info_Dialog)
    {
        Patient_Info_Dialog->setWindowTitle(QCoreApplication::translate("Patient_Info_Dialog", "Patient's Info", nullptr));
        Physio->setText(QCoreApplication::translate("Patient_Info_Dialog", "Physio", nullptr));
        CoM->setText(QCoreApplication::translate("Patient_Info_Dialog", "Co-Morbidity", nullptr));
        Med->setText(QCoreApplication::translate("Patient_Info_Dialog", "Medical H/O", nullptr));
        Finds->setText(QCoreApplication::translate("Patient_Info_Dialog", "Findings", nullptr));
        Invest->setText(QCoreApplication::translate("Patient_Info_Dialog", "Investigation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Patient_Info_Dialog", "Add Details", nullptr));
        Physio_2->setText(QCoreApplication::translate("Patient_Info_Dialog", "Physio", nullptr));
        Med_2->setText(QCoreApplication::translate("Patient_Info_Dialog", "Medical H/O", nullptr));
        CoM_2->setText(QCoreApplication::translate("Patient_Info_Dialog", "Co-Morbidity", nullptr));
        Finds_2->setText(QCoreApplication::translate("Patient_Info_Dialog", "Findings", nullptr));
        Invest_2->setText(QCoreApplication::translate("Patient_Info_Dialog", "Investigation", nullptr));
        pushButton->setText(QCoreApplication::translate("Patient_Info_Dialog", "Bill", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Patient_Info_Dialog", "Display Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Patient_Info_Dialog: public Ui_Patient_Info_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENT_INFO_DIALOG_H
