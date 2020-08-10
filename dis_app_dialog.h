#ifndef DIS_APP_DIALOG_H
#define DIS_APP_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<fstream>
#include<string.h>
#include<patient.h>
#include<QDebug>
#include <QMainWindow>
#include<appointment.h>
namespace Ui {
class Dis_app_Dialog;
}

class Dis_app_Dialog : public QDialog
{
    Q_OBJECT

public:
    int* pt2=NULL;
    explicit Dis_app_Dialog(QWidget *parent = nullptr);
    ~Dis_app_Dialog();

private slots:
    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dis_app_Dialog *ui;
};

#endif // DIS_APP_DIALOG_H
