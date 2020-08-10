#include "new_bill_dialog.h"
#include "ui_new_bill_dialog.h"

new_bill_Dialog::new_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new_bill_Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
}

new_bill_Dialog::~new_bill_Dialog()
{
    delete ui;
}

void new_bill_Dialog::on_pushButton_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"OPD");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_2_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"IPD");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_3_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"PNO");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_4_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"SPT");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_5_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"ACC");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_6_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"DRS");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_7_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"ROOM");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_8_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"PKG");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_9_clicked()
{
    add_bill_Dialog D;
    char nm[5];
    strcpy(nm,"OTH");
    D.setData3(nm);
    D.setModal(true);
    D.exec();
}

void new_bill_Dialog::on_pushButton_10_clicked()
{
    All_Bill_Dialog D;
    D.setModal(true);
    D.exec();
}
