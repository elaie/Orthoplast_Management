#ifndef EDIT_BILL_DIALOG_H
#define EDIT_BILL_DIALOG_H

#include <QDialog>
#include<billing.h>
#include<QMessageBox>
#include<patient.h>

namespace Ui {
class edit_bill_Dialog;
}

class edit_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    void SETDATA1(char *N,float B,float R,float Q,float Di,float E,float T,char *D,char *NA,float RM,char *ITEMB1,int FLAG4);
    explicit edit_bill_Dialog(QWidget *parent = nullptr);
    ~edit_bill_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::edit_bill_Dialog *ui;
};

#endif // EDIT_BILL_DIALOG_H
