#include "add_bill_dialog.h"
#include "ui_add_bill_dialog.h"

add_bill_Dialog::add_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_bill_Dialog)
{
}
void add_bill_Dialog:: setData3(char *n)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    strcpy(Nama,n);
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
}
add_bill_Dialog::~add_bill_Dialog()
{
    delete ui;
}
float Total,RM;
void add_bill_Dialog::on_pushButton_2_clicked()
{
    float Rate;
    float QTY;
    float Discount;
    float Extra;

    QString RAte2=ui->lineEdit_2->text();
    QString QTY2=ui->lineEdit_3->text();
    QString Discount2=ui->lineEdit_4->text();
    QString Extra2=ui->lineEdit_5->text();


    Rate=RAte2.toFloat();
    QTY=QTY2.toFloat();
    Discount=Discount2.toFloat();
    Extra=Extra2.toFloat();
    qDebug()<<"RATE"<<Rate;
    if(Rate<1||QTY<1)
    {
        QMessageBox::information(this,"Warning","Please Enter all Parameters");
        return;
    }
    Total=(Rate*QTY);
    Total-=Discount;
    Total+=Extra;
    qDebug()<<"TOTAL "<<Total;
    ui->label_11->setNum(Total);
}

void add_bill_Dialog::on_lineEdit_6_textChanged(const QString &arg1)
{
    float arg;
    arg=arg1.toFloat();
    float temp=arg;
    qDebug()<<"ARG1"<<arg1;
    RM=Total-temp;
    if(RM<0)
        RM=0;
    ui->label_12->setNum(Total-temp);
}

void add_bill_Dialog::on_pushButton_clicked()
{
    char Name[60];
    float Bill_No;
    float Rate;
    float QTY;
    float Discount;
    float Extra;
    float Total;
    char Date[15];
    QString NAME1=ui->comboBox->currentText();
    QString Bill_No2=ui->lineEdit->text();
    QString RAte2=ui->lineEdit_2->text();
    QString QTY2=ui->lineEdit_3->text();
    QString Discount2=ui->lineEdit_4->text();
    QString Extra2=ui->lineEdit_5->text();
    QString Date2=ui->dateEdit->text();

    strcpy(Name,NAME1.toStdString().c_str());
    strcpy(Date,Date2.toStdString().c_str());
    Bill_No=Bill_No2.toFloat();
    Rate=RAte2.toFloat();
    QTY=QTY2.toFloat();
    Discount=Discount2.toFloat();
    Extra=Extra2.toFloat();
    qDebug()<<"RATE"<<Rate;
    if(Rate<1||QTY<1)
    {
        QMessageBox::information(this,"Warning","Please Enter all Parameters");
        return;
    }
    Total=(Rate*QTY);
    Total-=Discount;
    Total+=Extra;
    qDebug()<<"TOTAL "<<Total;
    AddDataB(Name,Bill_No,Rate,QTY,Discount,Extra,Total,Date,Nama,RM);
    qDebug()<<"WORK SECOND WALA";
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}
