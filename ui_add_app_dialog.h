/********************************************************************************
** Form generated from reading UI file 'add_app_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_APP_DIALOG_H
#define UI_ADD_APP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_app_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_4;
    QTimeEdit *timeEdit;
    QGroupBox *groupBox_5;
    QDateEdit *dateEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Add_app_Dialog)
    {
        if (Add_app_Dialog->objectName().isEmpty())
            Add_app_Dialog->setObjectName(QString::fromUtf8("Add_app_Dialog"));
        Add_app_Dialog->resize(236, 477);
        layoutWidget = new QWidget(Add_app_Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 191, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 171, 31));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 30, 171, 31));
        comboBox_2->setEditable(true);

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 161, 56));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_3->addWidget(radioButton_2);


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        timeEdit = new QTimeEdit(groupBox_4);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(10, 30, 171, 31));
        timeEdit->setCalendarPopup(false);

        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        dateEdit = new QDateEdit(groupBox_5);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 30, 171, 31));
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(groupBox_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Add_app_Dialog);

        QMetaObject::connectSlotsByName(Add_app_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Add_app_Dialog)
    {
        Add_app_Dialog->setWindowTitle(QCoreApplication::translate("Add_app_Dialog", "Add Appointment", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Add_app_Dialog", "Doctor:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Add_app_Dialog", "Patient:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Add_app_Dialog", "Visit Type:", nullptr));
        radioButton->setText(QCoreApplication::translate("Add_app_Dialog", "New", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Add_app_Dialog", "Follow Up", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Add_app_Dialog", "Time:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Add_app_Dialog", "Date:", nullptr));
        pushButton->setText(QCoreApplication::translate("Add_app_Dialog", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_app_Dialog: public Ui_Add_app_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_APP_DIALOG_H
