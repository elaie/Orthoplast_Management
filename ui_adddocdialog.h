/********************************************************************************
** Form generated from reading UI file 'adddocdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOCDIALOG_H
#define UI_ADDDOCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddDocDialog
{
public:
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QLineEdit *NameE;
    QGroupBox *groupBox_4;
    QLineEdit *ADDE;
    QGroupBox *groupBox_5;
    QLineEdit *SpecE;
    QGroupBox *groupBox_6;
    QLineEdit *PhnoE;
    QGroupBox *groupBox_7;
    QLineEdit *EmailE;
    QPushButton *pushButton;
    QFrame *line;

    void setupUi(QDialog *AddDocDialog)
    {
        if (AddDocDialog->objectName().isEmpty())
            AddDocDialog->setObjectName(QString::fromUtf8("AddDocDialog"));
        AddDocDialog->resize(291, 522);
        groupBox_2 = new QGroupBox(AddDocDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 251, 61));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 191, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        groupBox_3 = new QGroupBox(AddDocDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(21, 91, 251, 70));
        groupBox_3->setMinimumSize(QSize(250, 70));
        NameE = new QLineEdit(groupBox_3);
        NameE->setObjectName(QString::fromUtf8("NameE"));
        NameE->setGeometry(QRect(10, 30, 230, 30));
        NameE->setMinimumSize(QSize(230, 30));
        groupBox_4 = new QGroupBox(AddDocDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(21, 167, 250, 70));
        groupBox_4->setMinimumSize(QSize(250, 70));
        ADDE = new QLineEdit(groupBox_4);
        ADDE->setObjectName(QString::fromUtf8("ADDE"));
        ADDE->setGeometry(QRect(10, 30, 230, 30));
        ADDE->setMinimumSize(QSize(230, 30));
        groupBox_5 = new QGroupBox(AddDocDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(21, 243, 250, 70));
        groupBox_5->setMinimumSize(QSize(250, 70));
        SpecE = new QLineEdit(groupBox_5);
        SpecE->setObjectName(QString::fromUtf8("SpecE"));
        SpecE->setGeometry(QRect(10, 30, 230, 30));
        SpecE->setMinimumSize(QSize(230, 30));
        groupBox_6 = new QGroupBox(AddDocDialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(21, 319, 250, 70));
        groupBox_6->setMinimumSize(QSize(250, 70));
        PhnoE = new QLineEdit(groupBox_6);
        PhnoE->setObjectName(QString::fromUtf8("PhnoE"));
        PhnoE->setGeometry(QRect(10, 30, 230, 30));
        PhnoE->setMinimumSize(QSize(230, 30));
        groupBox_7 = new QGroupBox(AddDocDialog);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(21, 395, 250, 70));
        groupBox_7->setMinimumSize(QSize(250, 70));
        EmailE = new QLineEdit(groupBox_7);
        EmailE->setObjectName(QString::fromUtf8("EmailE"));
        EmailE->setGeometry(QRect(10, 30, 230, 30));
        EmailE->setMinimumSize(QSize(230, 30));
        pushButton = new QPushButton(AddDocDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 470, 251, 30));
        pushButton->setMinimumSize(QSize(230, 30));
        line = new QFrame(AddDocDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 70, 251, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(AddDocDialog);

        QMetaObject::connectSlotsByName(AddDocDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDocDialog)
    {
        AddDocDialog->setWindowTitle(QCoreApplication::translate("AddDocDialog", "Add Doctor", nullptr));
        groupBox_2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("AddDocDialog", "Doctor's Information", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AddDocDialog", "Name:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("AddDocDialog", "Address:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AddDocDialog", "Specialization:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("AddDocDialog", "Phone Number:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("AddDocDialog", "Email:", nullptr));
        pushButton->setText(QCoreApplication::translate("AddDocDialog", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDocDialog: public Ui_AddDocDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOCDIALOG_H
