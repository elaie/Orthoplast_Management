#ifndef DISPLAY_PAT_DIALOG_H
#define DISPLAY_PAT_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<fstream>
#include<string.h>
#include<patient.h>
#include<QDebug>
#include <QMainWindow>
#include<patient_info_dialog.h>
#include<edit_pat_dialog.h>
namespace Ui {
class display_pat_Dialog;
}

class display_pat_Dialog : public QDialog
{
    Q_OBJECT

public:
    char NAME[60];
    char ADD[50];
    char DOB[15];
    char PHNO[15];
    char EMAIL[60];
    char GEN[8];
    char BLOOD_G[5];
    char REF[60];
    explicit display_pat_Dialog(QWidget *parent = nullptr);
    ~display_pat_Dialog();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::display_pat_Dialog *ui;
};

#endif // DISPLAY_PAT_DIALOG_H
