#ifndef PATIENT_INFO_DIALOG_H
#define PATIENT_INFO_DIALOG_H

#include <QDialog>
#include<iostream>
#include<string.h>
#include<patient_details.h>
#include<add_pdetails_dialog.h>
#include<dis_pdetails_dialog.h>
#include<pat_indi_bill_dialog.h>
namespace Ui {
class Patient_Info_Dialog;
}

class Patient_Info_Dialog : public QDialog
{
    Q_OBJECT

public:
    char PNAME[60];
    explicit Patient_Info_Dialog(QWidget *parent = nullptr);
    ~Patient_Info_Dialog();
    void setDataName(char *n);

private slots:
    void on_Med_clicked();

    void on_Med_2_clicked();

    void on_CoM_clicked();

    void on_CoM_2_clicked();

    void on_Finds_clicked();

    void on_Finds_2_clicked();

    void on_Invest_2_clicked();

    void on_Physio_clicked();

    void on_Physio_2_clicked();

    void on_Invest_clicked();

    void on_pushButton_clicked();

private:
    Ui::Patient_Info_Dialog *ui;
};

#endif // PATIENT_INFO_DIALOG_H
