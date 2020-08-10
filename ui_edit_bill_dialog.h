/********************************************************************************
** Form generated from reading UI file 'edit_bill_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_BILL_DIALOG_H
#define UI_EDIT_BILL_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_bill_Dialog
{
public:
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_5;
    QGroupBox *groupBox_7;
    QDateEdit *dateEdit;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_8;
    QLabel *label_11;
    QGroupBox *groupBox_9;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;

    void setupUi(QDialog *edit_bill_Dialog)
    {
        if (edit_bill_Dialog->objectName().isEmpty())
            edit_bill_Dialog->setObjectName(QString::fromUtf8("edit_bill_Dialog"));
        edit_bill_Dialog->resize(585, 601);
        line = new QFrame(edit_bill_Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(260, 10, 20, 561));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(edit_bill_Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 252, 564));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(250, 70));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 230, 30));
        comboBox->setMinimumSize(QSize(230, 30));
        comboBox->setEditable(true);

        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(250, 70));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 231, 31));
        lineEdit->setMinimumSize(QSize(230, 30));

        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(250, 70));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 30, 230, 31));
        lineEdit_2->setMinimumSize(QSize(230, 30));

        verticalLayout->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(250, 70));
        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 30, 230, 31));
        lineEdit_3->setMinimumSize(QSize(230, 30));

        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(250, 70));
        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(10, 30, 230, 31));
        lineEdit_4->setMinimumSize(QSize(230, 30));

        verticalLayout->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(layoutWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(250, 70));
        lineEdit_5 = new QLineEdit(groupBox_6);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(10, 30, 230, 31));
        lineEdit_5->setMinimumSize(QSize(230, 30));

        verticalLayout->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(layoutWidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(250, 70));
        dateEdit = new QDateEdit(groupBox_7);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(10, 30, 230, 31));
        dateEdit->setMinimumSize(QSize(230, 30));
        dateEdit->setCalendarPopup(true);

        verticalLayout->addWidget(groupBox_7);

        layoutWidget_2 = new QWidget(edit_bill_Dialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(280, 10, 261, 561));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(layoutWidget_2);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(250, 70));
        groupBox_8->setStyleSheet(QString::fromUtf8("font: 36pt \"MS Shell Dlg 2\";"));
        label_11 = new QLabel(groupBox_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 80, 230, 61));
        label_11->setMinimumSize(QSize(230, 30));
        label_11->setStyleSheet(QString::fromUtf8("font: 28pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(layoutWidget_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(250, 70));
        groupBox_9->setStyleSheet(QString::fromUtf8("font: 36pt \"MS Shell Dlg 2\";"));
        lineEdit_6 = new QLineEdit(groupBox_9);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(10, 80, 231, 61));
        lineEdit_6->setMinimumSize(QSize(230, 30));

        verticalLayout_3->addWidget(groupBox_9);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(230, 30));

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(edit_bill_Dialog);

        QMetaObject::connectSlotsByName(edit_bill_Dialog);
    } // setupUi

    void retranslateUi(QDialog *edit_bill_Dialog)
    {
        edit_bill_Dialog->setWindowTitle(QCoreApplication::translate("edit_bill_Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Patient's Name:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Bill No:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("edit_bill_Dialog", "RATE:", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("edit_bill_Dialog", "QTY:", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Discount:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Extra:", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Date:", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("edit_bill_Dialog", "dd/MM/yyyy", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("edit_bill_Dialog", "Total", nullptr));
        label_11->setText(QCoreApplication::translate("edit_bill_Dialog", "-", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("edit_bill_Dialog", "ADVANCE:", nullptr));
        pushButton->setText(QCoreApplication::translate("edit_bill_Dialog", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_bill_Dialog: public Ui_edit_bill_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_BILL_DIALOG_H
