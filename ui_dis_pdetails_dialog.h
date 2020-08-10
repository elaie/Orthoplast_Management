/********************************************************************************
** Form generated from reading UI file 'dis_pdetails_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIS_PDETAILS_DIALOG_H
#define UI_DIS_PDETAILS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_dis_pdetails_Dialog
{
public:
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *dis_pdetails_Dialog)
    {
        if (dis_pdetails_Dialog->objectName().isEmpty())
            dis_pdetails_Dialog->setObjectName(QString::fromUtf8("dis_pdetails_Dialog"));
        dis_pdetails_Dialog->resize(322, 425);
        groupBox = new QGroupBox(dis_pdetails_Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 291, 81));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 271, 41));
        groupBox_2 = new QGroupBox(dis_pdetails_Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 291, 281));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 271, 191));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 230, 271, 41));
        label_2 = new QLabel(dis_pdetails_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(31, 21, 16, 16));

        retranslateUi(dis_pdetails_Dialog);

        QMetaObject::connectSlotsByName(dis_pdetails_Dialog);
    } // setupUi

    void retranslateUi(QDialog *dis_pdetails_Dialog)
    {
        dis_pdetails_Dialog->setWindowTitle(QCoreApplication::translate("dis_pdetails_Dialog", "Display Details", nullptr));
        groupBox->setTitle(QCoreApplication::translate("dis_pdetails_Dialog", "Select Date:", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("dis_pdetails_Dialog", "Delete", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dis_pdetails_Dialog: public Ui_dis_pdetails_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIS_PDETAILS_DIALOG_H
