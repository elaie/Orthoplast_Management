#include "pat_indi_bill_dialog.h"
#include "ui_pat_indi_bill_dialog.h"

pat_indi_bill_Dialog::pat_indi_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pat_indi_bill_Dialog)
{

}

void pat_indi_bill_Dialog::setDataName3(char *n)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    strcpy(NAMAWA,n);
    char Location[180],temp[8];
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
        qDebug()<<"ITERATION: "<<i<<"TYPE"<<temp;
        qDebug()<<"LOCATION: "<<Location;
        qDebug()<<"SIZE"<<SIZE;
        ifstream fstream_ob;
        strcat(Location,".dat");
        fstream_ob.open(Location,ios::binary|ios::in);
        Billing D[SIZE];
        fstream_ob.read((char *)&D,sizeof(D));
        qDebug()<<"NAME"<<n;
        for(int m=0;m<SIZE;m++)
        {
            if(strcmp(D[m].Name,n)==0)
            {
                ui->listWidget->addItem(temp);
                TOTAL+=D[m].Total;
            }
        }
        fstream_ob.close();
    }
    ui->label->setNum(TOTAL);
}
pat_indi_bill_Dialog::~pat_indi_bill_Dialog()
{
    delete ui;
}

void pat_indi_bill_Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    char Location[180],temp[8];
    int SIZE,ROW,rm=0;
    ROW=ui->listWidget->currentRow();
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
        //sm+=SIZE;
        //qDebug()<<"I "<<i<<"size: "<<SIZE<<"ROW"<<ROW<<"SM"<<sm;
        qDebug()<<"ITERATION: "<<i<<"TYPE"<<temp;
        qDebug()<<"LOCATION: "<<Location;
        qDebug()<<"SIZE"<<SIZE;
        ifstream fstream_ob;
        strcat(Location,".dat");
        fstream_ob.open(Location,ios::binary|ios::in);
        Billing D[SIZE];
        fstream_ob.read((char *)&D,sizeof(D));
        for(int m=0;m<SIZE;m++)
        {
            //qDebug()<<"SK"<<sk<<"m"<<m<<"sk+m"<<sk+m;
            if(strcmp(NAMAWA,D[m].Name)==0)
            {
                if(rm==ROW)
                {
                    qDebug()<<"WORK"<<temp;
                    ui->label_10->setNum(D[m].Bill_No);
                    ui->label_11->setNum(D[m].Rate);
                    ui->label_12->setNum(D[m].QTY);
                    ui->label_13->setNum(D[m].Discount);
                    ui->label_14->setNum(D[m].Extra);
                    ui->label_15->setText(D[m].Date);
                    ui->label_16->setNum(D[m].Total);
                    ui->label_2->setNum(D[m].Remain);
                    return;
                }
                rm++;
            }
        }
        fstream_ob.close();
    }
}
int get_SIZE()
{
    char temp[8];
    int SIZE,SZ=0;
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
        SIZE=GetNumB(temp);
        SZ+=SIZE;
     }
    return SZ;
}

void pat_indi_bill_Dialog::on_pushButton_clicked()
{
    char Location[180],temp[8];
    int SIZE,ROW,rm=0;
    ROW=ui->listWidget->currentRow();
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
        //sm+=SIZE;
        //qDebug()<<"I "<<i<<"size: "<<SIZE<<"ROW"<<ROW<<"SM"<<sm;
        qDebug()<<"ITERATION: "<<i<<"TYPE"<<temp;
        qDebug()<<"LOCATION: "<<Location;
        qDebug()<<"SIZE"<<SIZE;
        ifstream fstream_ob;
        ofstream fstream_ob2;
        strcat(Location,".dat");
        fstream_ob.open(Location,ios::binary|ios::in);
        Billing D[SIZE];
        fstream_ob.read((char *)&D,sizeof(D));
        for(int m=0;m<SIZE;m++)
        {
            //qDebug()<<"SK"<<sk<<"m"<<m<<"sk+m"<<sk+m;
            if(strcmp(NAMAWA,D[m].Name)==0)
            {
                if(rm==ROW)
                {
                    D[m].Remain=0;
                    fstream_ob2.open(Location,ios::binary|ios::out);
                    fstream_ob2.write( (char *) & D, sizeof(D));
                    fstream_ob2.close();
                    QMessageBox::information(this,"Information","Bill Cleared!");
                    return;
                }
                rm++;
            }
        }
        fstream_ob.close();
    }
}
