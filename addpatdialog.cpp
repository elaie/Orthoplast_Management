#include "addpatdialog.h"
#include "ui_addpatdialog.h"

AddPatDialog::AddPatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPatDialog)
{
    ui->setupUi(this);
    char Location[180];
    LoC(Location);
    int SIZE;
    SIZE=GetNum();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Doctor D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    ui->comboBox_3->addItem(D[i].NAME);
}

AddPatDialog::~AddPatDialog()
{
    delete ui;
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
}

void AddPatDialog::on_pushButton_clicked()
{
    char NAME[60];
    char ADD[50];
    char DOB[15];
    char PHNO[15];
    char EMAIL[60];
    char GEN[8];
    char BLOOD_G[5];
    char REF2[60];
    QString NAME1=ui->NameE->text();
    QString ADD1=ui->AddE->text();
    QString DOB1=ui->AgeE->text();
    QString PHNO1=ui->PhnoE->text();
    QString EMAIL1=ui->EmailE->text();
    QString GEN1=ui->comboBox->currentText();
    QString BLOODG1=ui->comboBox_2->currentText();
    QString REF3=ui->comboBox_3->currentText();
    strcpy(NAME,NAME1.toStdString().c_str());
    strcpy(ADD,ADD1.toStdString().c_str());
    strcpy(DOB,DOB1.toStdString().c_str());
    strcpy(PHNO,PHNO1.toStdString().c_str());
    strcpy(EMAIL,EMAIL1.toStdString().c_str());
    strcpy(GEN,GEN1.toStdString().c_str());
    strcpy(BLOOD_G,BLOODG1.toStdString().c_str());
    strcpy(REF2,REF3.toStdString().c_str());
    AddDataP(NAME,ADD,DOB,PHNO,EMAIL,GEN,BLOOD_G,REF2);
    qDebug()<<"WORK";
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}
