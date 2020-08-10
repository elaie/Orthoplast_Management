#include "edit_bill_dialog.h"
#include "ui_edit_bill_dialog.h"

edit_bill_Dialog::edit_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_bill_Dialog)
{

}
char ITEM69[60];
int COUNT69;
void edit_bill_Dialog::SETDATA1(char *N, float B, float R, float Q, float Di, float E, float T, char *D, char *NA, float RM, char *ITEMB1, int FLAG4)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    strcpy(ITEM69,NA);
    COUNT69=FLAG4;
    char Location[180];
    ifstream fstream_ob;
    LoC2(Location);
    int SIZE=GetNumP();
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D2[SIZE];
    fstream_ob.read( (char *) & D2, sizeof(D2));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    ui->comboBox->addItem((D2[i].NAME));
    LoC6(Location,NA);
    SIZE=GetNumB(NA);
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D1[SIZE];
    fstream_ob.read( (char *)  &D1, sizeof(D1));
    fstream_ob.close();
    ui->comboBox->setCurrentText(N);
    ui->lineEdit->setText(QString::number(B));
    ui->lineEdit_2->setText(QString::number(R));
    ui->lineEdit_3->setText(QString::number(Q));
    ui->lineEdit_4->setText(QString::number(Di));
    ui->lineEdit_5->setText(QString::number(E));
    ui->lineEdit_6->setText(QString::number(RM));
    ui->label_11->setNum(T);
    QString date_string_on_db = D;
    QDate Date = QDate::fromString(date_string_on_db,"dd/MM/yyyy");
    ui->dateEdit->setDate(Date);
}

edit_bill_Dialog::~edit_bill_Dialog()
{
    delete ui;
}

void edit_bill_Dialog::on_pushButton_clicked()
{
    int SIZE;
    SIZE=GetNumB(ITEM69);
    char Location[180];
    LoC6(Location,ITEM69);
    Billing D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();

    QString NAME1=ui->comboBox->currentText();
    QString Bill_No2=ui->lineEdit->text();
    QString RAte2=ui->lineEdit_2->text();
    QString QTY2=ui->lineEdit_3->text();
    QString Discount2=ui->lineEdit_4->text();
    QString Extra2=ui->lineEdit_5->text();
    QString Date2=ui->dateEdit->text();

    strcpy(D[COUNT69].Name,NAME1.toStdString().c_str());
    strcpy(D[COUNT69].Date,Date2.toStdString().c_str());
    D[COUNT69].Bill_No=Bill_No2.toFloat();
    D[COUNT69].Rate=RAte2.toFloat();
    D[COUNT69].QTY=QTY2.toFloat();
    D[COUNT69].Discount=Discount2.toFloat();
    D[COUNT69].Extra=Extra2.toFloat();


    D[COUNT69].Total=(D[COUNT69].Rate*D[COUNT69].QTY);
    D[COUNT69].Total-=D[COUNT69].Discount;
    D[COUNT69].Total+=D[COUNT69].Extra;
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    fstream_ob2.close();
    QMessageBox::information(this,"Status","Information Edited Successfully!");
    close();
}
