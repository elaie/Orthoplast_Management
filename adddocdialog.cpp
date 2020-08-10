#include "adddocdialog.h"
#include "ui_adddocdialog.h"

AddDocDialog::AddDocDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDocDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
}

AddDocDialog::~AddDocDialog()
{
    delete ui;
}

void AddDocDialog::on_pushButton_clicked()
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
    strcpy(NAME,NAME1.toStdString().c_str());
    strcpy(ADD,ADD1.toStdString().c_str());
    strcpy(SPEC,SPEC1.toStdString().c_str());
    strcpy(PHNO,PHNO1.toStdString().c_str());
    strcpy(EMAIL,EMAIL1.toStdString().c_str());
    AddData(NAME,ADD,SPEC,PHNO,EMAIL);
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}
