/********************************************************************************
** Form generated from reading UI file 'display_doc_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_DOC_DIALOG_H
#define UI_DISPLAY_DOC_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Display_Doc_Dialog
{
public:
    QFrame *line;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QLabel *LSpec;
    QGroupBox *groupBox_6;
    QLabel *LEmail;
    QGroupBox *groupBox_2;
    QLabel *LName;
    QGroupBox *groupBox_4;
    QLabel *LAdd;
    QGroupBox *groupBox_5;
    QLabel *LPhno;
    QListWidget *listWidget;
    QPushButton *psuhDelete;

    void setupUi(QDialog *Display_Doc_Dialog)
    {
        if (Display_Doc_Dialog->objectName().isEmpty())
            Display_Doc_Dialog->setObjectName(QString::fromUtf8("Display_Doc_Dialog"));
        Display_Doc_Dialog->resize(547, 459);
        line = new QFrame(Display_Doc_Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 10, 16, 431));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(Display_Doc_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(280, 10, 251, 431));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 110, 211, 71));
        LSpec = new QLabel(groupBox_3);
        LSpec->setObjectName(QString::fromUtf8("LSpec"));
        LSpec->setGeometry(QRect(20, 20, 181, 31));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 350, 211, 71));
        LEmail = new QLabel(groupBox_6);
        LEmail->setObjectName(QString::fromUtf8("LEmail"));
        LEmail->setGeometry(QRect(20, 20, 181, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 211, 71));
        LName = new QLabel(groupBox_2);
        LName->setObjectName(QString::fromUtf8("LName"));
        LName->setGeometry(QRect(20, 20, 171, 41));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 190, 211, 71));
        LAdd = new QLabel(groupBox_4);
        LAdd->setObjectName(QString::fromUtf8("LAdd"));
        LAdd->setGeometry(QRect(20, 20, 181, 41));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 270, 211, 71));
        LPhno = new QLabel(groupBox_5);
        LPhno->setObjectName(QString::fromUtf8("LPhno"));
        LPhno->setGeometry(QRect(20, 20, 181, 31));
        listWidget = new QListWidget(Display_Doc_Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(11, 11, 251, 371));
        psuhDelete = new QPushButton(Display_Doc_Dialog);
        psuhDelete->setObjectName(QString::fromUtf8("psuhDelete"));
        psuhDelete->setGeometry(QRect(10, 390, 251, 51));

        retranslateUi(Display_Doc_Dialog);

        QMetaObject::connectSlotsByName(Display_Doc_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Display_Doc_Dialog)
    {
        Display_Doc_Dialog->setWindowTitle(QCoreApplication::translate("Display_Doc_Dialog", "Display Doctor's Information", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Information", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Specializtion:", nullptr));
        LSpec->setText(QCoreApplication::translate("Display_Doc_Dialog", "-", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Email:", nullptr));
        LEmail->setText(QCoreApplication::translate("Display_Doc_Dialog", "-", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Name:", nullptr));
        LName->setText(QCoreApplication::translate("Display_Doc_Dialog", "-", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Address:", nullptr));
        LAdd->setText(QCoreApplication::translate("Display_Doc_Dialog", "-", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Display_Doc_Dialog", "Phone Number:", nullptr));
        LPhno->setText(QCoreApplication::translate("Display_Doc_Dialog", "-", nullptr));
        psuhDelete->setText(QCoreApplication::translate("Display_Doc_Dialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Display_Doc_Dialog: public Ui_Display_Doc_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_DOC_DIALOG_H
