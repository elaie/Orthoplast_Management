#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<backup.h>
#include<adddocdialog.h>
#include<display_doc_dialog.h>
#include<addpatdialog.h>
#include<display_pat_dialog.h>
#include<add_app_dialog.h>
#include<dis_app_dialog.h>
#include<new_bill_dialog.h>
#include<new_dis_bill_dialog.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_doc_clicked();

    void on_dis_doc_clicked();

    void on_add_pat_clicked();

    void on_dis_pat_clicked();

    void on_new_app_clicked();

    void on_dis_app_clicked();

    void on_new_bill_clicked();

    void on_display_bill_clicked();

    void on_actionBackup_triggered();

    void on_actionRestore_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
