/********************************************************************************
** Form generated from reading UI file 'add_pdetails_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PDETAILS_DIALOG_H
#define UI_ADD_PDETAILS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_PDetails_Dialog
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QSplitter *splitter;
    QLabel *val;
    QLabel *label_2;

    void setupUi(QDialog *Add_PDetails_Dialog)
    {
        if (Add_PDetails_Dialog->objectName().isEmpty())
            Add_PDetails_Dialog->setObjectName(QString::fromUtf8("Add_PDetails_Dialog"));
        Add_PDetails_Dialog->resize(465, 441);
        groupBox = new QGroupBox(Add_PDetails_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 441, 421));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 411, 371));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(270, 40));
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(350, 400, 71, 21));
        splitter->setOrientation(Qt::Horizontal);
        val = new QLabel(splitter);
        val->setObjectName(QString::fromUtf8("val"));
        splitter->addWidget(val);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);

        retranslateUi(Add_PDetails_Dialog);

        QMetaObject::connectSlotsByName(Add_PDetails_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Add_PDetails_Dialog)
    {
        Add_PDetails_Dialog->setWindowTitle(QCoreApplication::translate("Add_PDetails_Dialog", "Add Information", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Add_PDetails_Dialog", "Submit", nullptr));
        val->setText(QCoreApplication::translate("Add_PDetails_Dialog", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Add_PDetails_Dialog", "/800", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_PDetails_Dialog: public Ui_Add_PDetails_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PDETAILS_DIALOG_H
