#include "patient_info_dialog.h"
#include "ui_patient_info_dialog.h"

Patient_Info_Dialog::Patient_Info_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Patient_Info_Dialog)
{
}
void Patient_Info_Dialog::setDataName(char *n)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    strcpy(PNAME,n);
}
Patient_Info_Dialog::~Patient_Info_Dialog()
{
    delete ui;
}

void Patient_Info_Dialog::on_Med_clicked()
{
    Add_PDetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_MHO");
    D.setDataName2(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Med_2_clicked()
{
    dis_pdetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_MHO");
    D.setDataName3(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_CoM_clicked()
{
    Add_PDetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_CMO");
    D.setDataName2(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_CoM_2_clicked()
{
    dis_pdetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_CMO");
    D.setDataName3(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Finds_clicked()
{
    Add_PDetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_FND");
    D.setDataName2(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Finds_2_clicked()
{
    dis_pdetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_FND");
    D.setDataName3(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Invest_2_clicked()
{
    dis_pdetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_INV");
    D.setDataName3(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Physio_clicked()
{
    Add_PDetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_PHY");
    D.setDataName2(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Physio_2_clicked()
{
    dis_pdetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_PHY");
    D.setDataName3(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_Invest_clicked()
{
    Add_PDetails_Dialog D;
    char TEMP[80];
    strcpy(TEMP,PNAME);
    strcat(TEMP,"_INV");
    D.setDataName2(TEMP);
    D.setModal(true);
    D.exec();
}

void Patient_Info_Dialog::on_pushButton_clicked()
{
    pat_indi_bill_Dialog D;
    D.setDataName3(PNAME);
    D.setModal(true);
    D.exec();
}
