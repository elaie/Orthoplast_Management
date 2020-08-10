#include "all_bill_dialog.h"
#include "ui_all_bill_dialog.h"

All_Bill_Dialog::All_Bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::All_Bill_Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);

    //strcpy(Nama,n);
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
float Total1=0,RM1,tp=0;
void All_Bill_Dialog:: setName4(char *n)
{

}
All_Bill_Dialog::~All_Bill_Dialog()
{
    delete ui;
}

void All_Bill_Dialog::on_pushButton_2_clicked()
{
    Total1=0;
    tp=0;
    float Discount;
    float Extra;

    float OPD11,OPD22,IPD11,IPD22,PNO11,PNO22,SPH11,SPH22,ACC11,ACC22,DRS11,DRS22,ROOM11,ROOM22,PKG11,PKG22,OTH11,OTH22;

    QString RAte2=ui->lineEdit_2->text();
    QString QTY2=ui->lineEdit_3->text();
    QString Discount2=ui->lineEdit_4->text();
    QString Extra2=ui->lineEdit_5->text();

    QString OPD1,OPD2,IPD1,IPD2,PNO1,PNO2,SPH1,SPH2,ACC1,ACC2,DRS1,DRS2,ROOM1,ROOM2,PKG1,PKG2,OTH1,OTH2;
    if(ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty())
    {
        qDebug()<<"OPD IS EMPTY";
    }
    else
    {
        OPD1=ui->lineEdit_2->text();
        OPD2=ui->lineEdit_3->text();
        OPD11=OPD1.toFloat();
        OPD22=OPD2.toFloat();
        Total1+=(OPD11*OPD22);
        tp++;
    }
    if(ui->lineEdit_9->text().isEmpty()||ui->lineEdit_10->text().isEmpty())
    {
        qDebug()<<"IPD IS EMPTY";
    }
    else
    {
        IPD1=ui->lineEdit_10->text();
        IPD2=ui->lineEdit_9->text();
        IPD11=IPD1.toFloat();
        IPD22=IPD2.toFloat();
        Total1+=(IPD11*IPD22);
        tp++;
    }
    if(ui->lineEdit_11->text().isEmpty()||ui->lineEdit_12->text().isEmpty())
    {
        qDebug()<<"PNO IS EMPTY";
    }
    else
    {
        PNO1=ui->lineEdit_12->text();
        PNO2=ui->lineEdit_11->text();
        PNO11=PNO1.toFloat();
        PNO22=PNO2.toFloat();
        Total1+=(PNO11*PNO22);
        tp++;
    }
    if(ui->lineEdit_15->text().isEmpty()||ui->lineEdit_16->text().isEmpty())
    {
        qDebug()<<"SPEECH IS EMPTY";
    }
    else
    {
        SPH1=ui->lineEdit_16->text();
        SPH2=ui->lineEdit_15->text();
        SPH11=SPH1.toFloat();
        SPH22=SPH2.toFloat();
        Total1+=(SPH11*SPH22);
        tp++;
    }
    if(ui->lineEdit_17->text().isEmpty()||ui->lineEdit_18->text().isEmpty())
    {
        qDebug()<<"ACC IS EMPTY";
    }
    else
    {
        ACC1=ui->lineEdit_18->text();
        ACC2=ui->lineEdit_17->text();
        ACC11=ACC1.toFloat();
        ACC22=ACC2.toFloat();
        Total1+=(ACC11*ACC22);
        tp++;
    }
    if(ui->lineEdit_19->text().isEmpty()||ui->lineEdit_20->text().isEmpty())
    {
        qDebug()<<"DRESS IS EMPTY";
    }
    else
    {
        DRS1=ui->lineEdit_20->text();
        DRS2=ui->lineEdit_19->text();
        DRS11=DRS1.toFloat();
        DRS22=DRS2.toFloat();
        Total1+=(DRS11*DRS22);
        tp++;
    }
    if(ui->lineEdit_21->text().isEmpty()||ui->lineEdit_22->text().isEmpty())
    {
        qDebug()<<"ROOM IS EMPTY";
    }
    else
    {
        ROOM1=ui->lineEdit_22->text();
        ROOM2=ui->lineEdit_21->text();
        ROOM11=ROOM1.toFloat();
        ROOM22=ROOM2.toFloat();
        Total1+=(ROOM11*ROOM22);
        tp++;
    }
    if(ui->lineEdit_23->text().isEmpty()||ui->lineEdit_24->text().isEmpty())
    {
        qDebug()<<"PKG IS EMPTY";
    }
    else
    {
        PKG1=ui->lineEdit_24->text();
        PKG2=ui->lineEdit_23->text();
        PKG11=PKG1.toFloat();
        PKG22=PKG2.toFloat();
        Total1+=(PKG11*PKG22);
        tp++;
    }
    if(ui->lineEdit_25->text().isEmpty()||ui->lineEdit_26->text().isEmpty())
    {
        qDebug()<<"OTH IS EMPTY";
    }
    else
    {
        OTH1=ui->lineEdit_26->text();
        OTH2=ui->lineEdit_25->text();
        OTH11=OTH1.toFloat();
        OTH22=OTH2.toFloat();
        Total1+=(OTH11*OTH22);
        tp++;
    }
    Discount=Discount2.toFloat();
    Extra=Extra2.toFloat();


    Total1-=Discount;
    Total1+=Extra;
    qDebug()<<"TOTAL "<<Total1;
    ui->label_11->setNum(Total1);
}

void All_Bill_Dialog::on_pushButton_clicked()
{
    char Name[60],Nama[60];
    float Bill_No,Discount3,RM3;
    float OPD11,OPD22,IPD11,IPD22,PNO11,PNO22,SPH11,SPH22,ACC11,ACC22,DRS11,DRS22,ROOM11,ROOM22,PKG11,PKG22,OTH11,OTH22;
    float Discount;
    float Extra,Extra3;
    float Total=0;
    char Date[15];
    QString OPD1,OPD2,IPD1,IPD2,PNO1,PNO2,SPH1,SPH2,ACC1,ACC2,DRS1,DRS2,ROOM1,ROOM2,PKG1,PKG2,OTH1,OTH2;
    QString NAME1=ui->comboBox->currentText();
    QString Bill_No2=ui->lineEdit->text();
    QString Discount2=ui->lineEdit_4->text();
    QString Extra2=ui->lineEdit_5->text();
    QString Date2=ui->dateEdit->text();
    strcpy(Name,NAME1.toStdString().c_str());
    strcpy(Date,Date2.toStdString().c_str());
    Bill_No=Bill_No2.toFloat();

    Discount=Discount2.toFloat();
    Extra=Extra2.toFloat();
    Discount3=Discount/tp;
    Extra3=Extra/tp;
    RM3=RM1/tp;
    if(ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty())
    {
        qDebug()<<"OPD IS EMPTY";
    }
    else
    {
        OPD1=ui->lineEdit_2->text();
        OPD2=ui->lineEdit_3->text();
        OPD11=OPD1.toFloat();
        OPD22=OPD2.toFloat();
        Total=(OPD11*OPD22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"OPD");
        AddDataB(Name,Bill_No,OPD11,OPD22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_9->text().isEmpty()||ui->lineEdit_10->text().isEmpty())
    {
        qDebug()<<"IPD IS EMPTY";
    }
    else
    {
        IPD1=ui->lineEdit_10->text();
        IPD2=ui->lineEdit_9->text();
        IPD11=IPD1.toFloat();
        IPD22=IPD2.toFloat();
        Total=(IPD11*IPD22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"IPD");
        AddDataB(Name,Bill_No,IPD11,IPD22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_11->text().isEmpty()||ui->lineEdit_12->text().isEmpty())
    {
        qDebug()<<"PNO IS EMPTY";
    }
    else
    {
        PNO1=ui->lineEdit_12->text();
        PNO2=ui->lineEdit_11->text();
        PNO11=PNO1.toFloat();
        PNO22=PNO2.toFloat();
        Total=(PNO11*PNO22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"PNO");
        AddDataB(Name,Bill_No,PNO11,PNO22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_15->text().isEmpty()||ui->lineEdit_16->text().isEmpty())
    {
        qDebug()<<"SPEECH IS EMPTY";
    }
    else
    {
        SPH1=ui->lineEdit_16->text();
        SPH2=ui->lineEdit_15->text();
        SPH11=SPH1.toFloat();
        SPH22=SPH2.toFloat();
        Total=(SPH11*SPH22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"SPT");
        AddDataB(Name,Bill_No,SPH11,SPH22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_17->text().isEmpty()||ui->lineEdit_18->text().isEmpty())
    {
        qDebug()<<"ACC IS EMPTY";
    }
    else
    {
        ACC1=ui->lineEdit_18->text();
        ACC2=ui->lineEdit_17->text();
        ACC11=ACC1.toFloat();
        ACC22=ACC2.toFloat();
        Total=(ACC11*ACC22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"ACC");
        AddDataB(Name,Bill_No,ACC11,ACC22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_19->text().isEmpty()||ui->lineEdit_20->text().isEmpty())
    {
        qDebug()<<"DRESS IS EMPTY";
    }
    else
    {
        DRS1=ui->lineEdit_20->text();
        DRS2=ui->lineEdit_19->text();
        DRS11=DRS1.toFloat();
        DRS22=DRS2.toFloat();
        Total=(DRS11*DRS22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"DRS");
        AddDataB(Name,Bill_No,DRS11,DRS22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_21->text().isEmpty()||ui->lineEdit_22->text().isEmpty())
    {
        qDebug()<<"ROOM IS EMPTY";
    }
    else
    {
        ROOM1=ui->lineEdit_22->text();
        ROOM2=ui->lineEdit_21->text();
        ROOM11=ROOM1.toFloat();
        ROOM22=ROOM2.toFloat();
        Total=(ROOM11*ROOM22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"ROOM");
        AddDataB(Name,Bill_No,ROOM11,ROOM22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_23->text().isEmpty()||ui->lineEdit_24->text().isEmpty())
    {
        qDebug()<<"PKG IS EMPTY";
    }
    else
    {
        PKG1=ui->lineEdit_24->text();
        PKG2=ui->lineEdit_23->text();
        PKG11=PKG1.toFloat();
        PKG22=PKG2.toFloat();
        Total=(PKG11*PKG22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"PKG");
        AddDataB(Name,Bill_No,PKG11,PKG22,Discount3,Extra3,Total,Date,Nama,RM3);
    }
    if(ui->lineEdit_25->text().isEmpty()||ui->lineEdit_26->text().isEmpty())
    {
        qDebug()<<"OTH IS EMPTY";
    }
    else
    {
        OTH1=ui->lineEdit_26->text();
        OTH2=ui->lineEdit_25->text();
        OTH11=OTH1.toFloat();
        OTH22=OTH2.toFloat();
        Total=(OTH11*OTH22);
        Total-=Discount3;
        Total+=Extra3;
        strcpy(Nama,"OTH");
        AddDataB(Name,Bill_No,OTH11,OTH22,Discount3,Extra3,Total,Date,Nama,RM3);
    }


    qDebug()<<"WORK SECOND WALA";
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}

void All_Bill_Dialog::on_lineEdit_6_textChanged(const QString &arg1)
{
    float arg;
    arg=arg1.toFloat();
    float temp=arg;
    qDebug()<<"ARG1"<<arg1;
    RM1=Total1-temp;
    if(RM1<0)
        RM1=0;
    ui->label_12->setNum(Total1-temp);
}
