#include "dis_total_bill_dialog.h"
#include "ui_dis_total_bill_dialog.h"

dis_total_bill_Dialog::dis_total_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dis_total_bill_Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    ui->dateEdit_2->setDate(date);
    char Location[180],temp[8];
    float ToTAL=0;
    int SIZE;
    for(int i=0;i<9;i++)
    {
        switch(i)
        {
        case 0:
            strcpy(temp,"OPD");
            break;
        case 1:
            strcpy(temp,"IPD");
            break;
        case 2:
            strcpy(temp,"PNO");
            break;
        case 3:
            strcpy(temp,"SPT");
            break;
        case 4:
            strcpy(temp,"ACC");
            break;
        case 5:
            strcpy(temp,"DRS");
            break;
        case 6:
            strcpy(temp,"ROOM");
            break;
        case 7:
            strcpy(temp,"PKG");
            break;
        case 8:
            strcpy(temp,"OTH");
            break;
        }
    LoC6(Location,temp);
    SIZE=GetNumB(temp);
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int j=0;j<SIZE;j++)
    {
        ToTAL+=D[j].Total;
    }
    }
    ui->label_7->setNum(ToTAL);
}

dis_total_bill_Dialog::~dis_total_bill_Dialog()
{
    delete ui;
}

void dis_total_bill_Dialog::on_pushButton_clicked()
{
    char Location[180],temp[8],DT[15];
    QString DT2 = ui->dateEdit->text();
    strcpy(DT,DT2.toStdString().c_str());
    qDebug()<<DT;

    float ToTAL=0;
    int SIZE;
    for(int i=0;i<9;i++)
    {
        switch(i)
        {
        case 0:
            strcpy(temp,"OPD");
            break;
        case 1:
            strcpy(temp,"IPD");
            break;
        case 2:
            strcpy(temp,"PNO");
            break;
        case 3:
            strcpy(temp,"SPT");
            break;
        case 4:
            strcpy(temp,"ACC");
            break;
        case 5:
            strcpy(temp,"DRS");
            break;
        case 6:
            strcpy(temp,"ROOM");
            break;
        case 7:
            strcpy(temp,"PKG");
            break;
        case 8:
            strcpy(temp,"OTH");
            break;
        }
    LoC6(Location,temp);
    SIZE=GetNumB(temp);
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int j=0;j<SIZE;j++)
    {
        if(strcmp(D[j].Date,DT)==0)
        ToTAL+=D[j].Total;
    }
    }
    ui->label_8->setText(DT2);
    ui->label_4->setNum(ToTAL);
}

void dis_total_bill_Dialog::on_pushButton_2_clicked()
{
    char Location[180],temp[8],DT[15],temp2[15];
    QString DT2 = ui->dateEdit_2->text();
    strcpy(DT,DT2.toStdString().c_str());
    qDebug()<<DT;
    float ToTAL=0;
    int SIZE;
    for(int i=0;i<9;i++)
    {
        switch(i)
        {
        case 0:
            strcpy(temp,"OPD");
            break;
        case 1:
            strcpy(temp,"IPD");
            break;
        case 2:
            strcpy(temp,"PNO");
            break;
        case 3:
            strcpy(temp,"SPT");
            break;
        case 4:
            strcpy(temp,"ACC");
            break;
        case 5:
            strcpy(temp,"DRS");
            break;
        case 6:
            strcpy(temp,"ROOM");
            break;
        case 7:
            strcpy(temp,"PKG");
            break;
        case 8:
            strcpy(temp,"OTH");
            break;
        }
    LoC6(Location,temp);
    SIZE=GetNumB(temp);
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int j=0;j<SIZE;j++)
    {
        int k,l;
        for(k=3,l=0;k<10;k++,l++)
        {
            temp2[l]=D[j].Date[k];
        }
        temp2[l]=NULL;
        if(strcmp(temp2,DT)==0)
        ToTAL+=D[j].Total;
    }
    }
    ui->label_9->setText(DT);
    ui->label_6->setNum(ToTAL);
}
