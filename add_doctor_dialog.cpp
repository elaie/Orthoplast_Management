#include "add_doctor_dialog.h"
#include "ui_add_doctor_dialog.h"
#include<doctor.h>
#include <QDialog>
#include<QtWidgets>
Add_Doctor_Dialog::Add_Doctor_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Doctor_Dialog)
{
    ui->setupUi(this);
}

Add_Doctor_Dialog::~Add_Doctor_Dialog()
{
    delete ui;
}

void Add_Doctor_Dialog::on_pushButton_clicked()
{
    char NAME[60];
    char ADD[50];
    char SPEC[50];
    char PHNO[15];
    char EMAIL[60];
    QString NAME1=ui->NameE->text();
    QString ADD1=ui->ADDE->text();
    QString SPEC1=ui->SpecE->text();
    QString PHNO1=ui->PhnoE->text();
    QString EMAIL1=ui->EmailE->text();

}
