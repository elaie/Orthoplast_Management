/********************************************************************************
** Form generated from reading UI file 'edit_pat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_PAT_DIALOG_H
#define UI_EDIT_PAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_edit_pat_Dialog
{
public:
    QGroupBox *groupBox_4;
    QLineEdit *PhnoE;
    QPushButton *pushButton;
    QGroupBox *groupBox_5;
    QLineEdit *AgeE;
    QGroupBox *groupBox_7;
    QComboBox *comboBox_2;
    QFrame *line;
    QGroupBox *groupBox_6;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QLineEdit *NameE;
    QGroupBox *groupBox_3;
    QLineEdit *EmailE;
    QGroupBox *groupBox_8;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_2;
    QLineEdit *AddE;

    void setupUi(QDialog *edit_pat_Dialog)
    {
        if (edit_pat_Dialog->objectName().isEmpty())
            edit_pat_Dialog->setObjectName(QString::fromUtf8("edit_pat_Dialog"));
        edit_pat_Dialog->resize(551, 537);
        groupBox_4 = new QGroupBox(edit_pat_Dialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 290, 250, 80));
        groupBox_4->setMinimumSize(QSize(250, 70));
        PhnoE = new QLineEdit(groupBox_4);
        PhnoE->setObjectName(QString::fromUtf8("PhnoE"));
        PhnoE->setGeometry(QRect(10, 30, 230, 30));
        PhnoE->setMinimumSize(QSize(230, 30));
        pushButton = new QPushButton(edit_pat_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 480, 230, 30));
        pushButton->setMinimumSize(QSize(230, 30));
        groupBox_5 = new QGroupBox(edit_pat_Dialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 380, 250, 80));
        groupBox_5->setMinimumSize(QSize(250, 70));
        AgeE = new QLineEdit(groupBox_5);
        AgeE->setObjectName(QString::fromUtf8("AgeE"));
        AgeE->setGeometry(QRect(10, 30, 231, 31));
        groupBox_7 = new QGroupBox(edit_pat_Dialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(280, 110, 250, 80));
        groupBox_7->setMinimumSize(QSize(250, 70));
        comboBox_2 = new QComboBox(groupBox_7);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 30, 230, 30));
        comboBox_2->setMinimumSize(QSize(230, 30));
        line = new QFrame(edit_pat_Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 20, 20, 491));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_6 = new QGroupBox(edit_pat_Dialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(280, 20, 250, 80));
        groupBox_6->setMinimumSize(QSize(250, 70));
        comboBox = new QComboBox(groupBox_6);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 230, 30));
        comboBox->setMinimumSize(QSize(230, 30));
        groupBox = new QGroupBox(edit_pat_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 250, 80));
        groupBox->setMinimumSize(QSize(250, 70));
        NameE = new QLineEdit(groupBox);
        NameE->setObjectName(QString::fromUtf8("NameE"));
        NameE->setGeometry(QRect(10, 30, 230, 30));
        NameE->setMinimumSize(QSize(230, 30));
        groupBox_3 = new QGroupBox(edit_pat_Dialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 200, 250, 80));
        groupBox_3->setMinimumSize(QSize(250, 70));
        EmailE = new QLineEdit(groupBox_3);
        EmailE->setObjectName(QString::fromUtf8("EmailE"));
        EmailE->setGeometry(QRect(10, 30, 230, 30));
        EmailE->setMinimumSize(QSize(230, 30));
        groupBox_8 = new QGroupBox(edit_pat_Dialog);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(280, 200, 250, 80));
        groupBox_8->setMinimumSize(QSize(250, 70));
        comboBox_3 = new QComboBox(groupBox_8);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 30, 230, 30));
        comboBox_3->setMinimumSize(QSize(230, 30));
        groupBox_2 = new QGroupBox(edit_pat_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 250, 80));
        groupBox_2->setMinimumSize(QSize(250, 70));
        AddE = new QLineEdit(groupBox_2);
        AddE->setObjectName(QString::fromUtf8("AddE"));
        AddE->setGeometry(QRect(10, 30, 230, 30));
        AddE->setMinimumSize(QSize(230, 30));

        retranslateUi(edit_pat_Dialog);

        QMetaObject::connectSlotsByName(edit_pat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *edit_pat_Dialog)
    {
        edit_pat_Dialog->setWindowTitle(QCoreApplication::translate("edit_pat_Dialog", "Dialog", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("edit_pat_Dialog", "PHONE NUMBER:", nullptr));
        pushButton->setText(QCoreApplication::translate("edit_pat_Dialog", "Submit", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("edit_pat_Dialog", "Age:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("edit_pat_Dialog", "BLOOD GROUP:", nullptr));
        comboBox_2->setItemText(0, QString());
        comboBox_2->setItemText(1, QCoreApplication::translate("edit_pat_Dialog", "A+", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("edit_pat_Dialog", "A-", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("edit_pat_Dialog", "B+", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("edit_pat_Dialog", "B-", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("edit_pat_Dialog", "AB+", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("edit_pat_Dialog", "AB-", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("edit_pat_Dialog", "O+", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("edit_pat_Dialog", "O-", nullptr));

        groupBox_6->setTitle(QCoreApplication::translate("edit_pat_Dialog", "GENDER:", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("edit_pat_Dialog", "Male", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("edit_pat_Dialog", "Female", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("edit_pat_Dialog", "Others", nullptr));

        groupBox->setTitle(QCoreApplication::translate("edit_pat_Dialog", "NAME:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("edit_pat_Dialog", "EMAIL:", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("edit_pat_Dialog", "REFERRED BY:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("edit_pat_Dialog", "ADDRESS:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_pat_Dialog: public Ui_edit_pat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_PAT_DIALOG_H
