/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBackup;
    QAction *actionRestore;
    QAction *actionExit;
    QWidget *centralwidget;
    QPushButton *dis_doc;
    QPushButton *new_bill;
    QPushButton *display_bill;
    QPushButton *new_app;
    QPushButton *add_doc;
    QPushButton *dis_app;
    QPushButton *dis_pat;
    QPushButton *add_pat;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(666, 535);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionBackup = new QAction(MainWindow);
        actionBackup->setObjectName(QString::fromUtf8("actionBackup"));
        actionRestore = new QAction(MainWindow);
        actionRestore->setObjectName(QString::fromUtf8("actionRestore"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dis_doc = new QPushButton(centralwidget);
        dis_doc->setObjectName(QString::fromUtf8("dis_doc"));
        dis_doc->setGeometry(QRect(30, 330, 150, 150));
        dis_doc->setMinimumSize(QSize(150, 150));
        dis_doc->setMaximumSize(QSize(150, 150));
        dis_doc->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        new_bill = new QPushButton(centralwidget);
        new_bill->setObjectName(QString::fromUtf8("new_bill"));
        new_bill->setGeometry(QRect(480, 180, 150, 150));
        new_bill->setMinimumSize(QSize(150, 150));
        new_bill->setMaximumSize(QSize(150, 150));
        new_bill->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        display_bill = new QPushButton(centralwidget);
        display_bill->setObjectName(QString::fromUtf8("display_bill"));
        display_bill->setGeometry(QRect(480, 330, 150, 150));
        display_bill->setMinimumSize(QSize(150, 150));
        display_bill->setMaximumSize(QSize(150, 150));
        new_app = new QPushButton(centralwidget);
        new_app->setObjectName(QString::fromUtf8("new_app"));
        new_app->setGeometry(QRect(330, 180, 150, 150));
        new_app->setMinimumSize(QSize(150, 150));
        new_app->setMaximumSize(QSize(150, 150));
        add_doc = new QPushButton(centralwidget);
        add_doc->setObjectName(QString::fromUtf8("add_doc"));
        add_doc->setGeometry(QRect(30, 180, 150, 150));
        add_doc->setMinimumSize(QSize(150, 150));
        add_doc->setMaximumSize(QSize(150, 150));
        add_doc->setStyleSheet(QString::fromUtf8(""));
        dis_app = new QPushButton(centralwidget);
        dis_app->setObjectName(QString::fromUtf8("dis_app"));
        dis_app->setGeometry(QRect(330, 330, 150, 150));
        dis_app->setMinimumSize(QSize(150, 150));
        dis_app->setMaximumSize(QSize(150, 150));
        dis_pat = new QPushButton(centralwidget);
        dis_pat->setObjectName(QString::fromUtf8("dis_pat"));
        dis_pat->setGeometry(QRect(180, 330, 150, 150));
        dis_pat->setMinimumSize(QSize(150, 150));
        dis_pat->setMaximumSize(QSize(150, 150));
        dis_pat->setStyleSheet(QString::fromUtf8(""));
        add_pat = new QPushButton(centralwidget);
        add_pat->setObjectName(QString::fromUtf8("add_pat"));
        add_pat->setGeometry(QRect(180, 180, 150, 150));
        add_pat->setMinimumSize(QSize(150, 150));
        add_pat->setMaximumSize(QSize(150, 150));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 561, 111));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 666, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionBackup);
        menuFile->addAction(actionRestore);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hospital Manegment", nullptr));
        actionBackup->setText(QCoreApplication::translate("MainWindow", "Backup", nullptr));
        actionRestore->setText(QCoreApplication::translate("MainWindow", "Restore", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        dis_doc->setText(QCoreApplication::translate("MainWindow", "DISPLAY DOCTOR", nullptr));
        new_bill->setText(QCoreApplication::translate("MainWindow", "NEW BILL", nullptr));
        display_bill->setText(QCoreApplication::translate("MainWindow", "DISPLAY BILL", nullptr));
        new_app->setText(QCoreApplication::translate("MainWindow", "NEW APPOINT", nullptr));
        add_doc->setText(QCoreApplication::translate("MainWindow", "ADD DOCTOR", nullptr));
        dis_app->setText(QCoreApplication::translate("MainWindow", "DISPLAY APPOINT", nullptr));
        dis_pat->setText(QCoreApplication::translate("MainWindow", "DISPLAY PATIENT", nullptr));
        add_pat->setText(QCoreApplication::translate("MainWindow", "ADD PATIENT", nullptr));
        label->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
