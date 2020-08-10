#include "dis_bill_dialog.h"
#include "ui_dis_bill_dialog.h"

dis_bill_Dialog::dis_bill_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dis_bill_Dialog)
{

}
char ITEMB[60];
int J,NUM;
void dis_bill_Dialog:: setData3(char *n)
{
    int label_count=0;
    strcpy(Nama,n);
    ui->setupUi(this);

    QDate date2 = QDate::currentDate();
    ui->dateEdit->setDate(date2);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    char Location[180];
    LoC6(Location,Nama);
    int SIZE;
    SIZE=GetNumB(Nama);
    if(SIZE<4999)
    J=SIZE;
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);

    Billing D[SIZE];
    fstream_ob.read( (char *)  &D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->listWidget->addItem(D[i].Name);
        label_count++;
    }
    ui->label_3->setNum(label_count);
    pt2 = new int[SIZE];
    for (int i=0; i<SIZE; i++)
        {
        pt2[i] = i;
        }
}
dis_bill_Dialog::~dis_bill_Dialog()
{
    delete ui;
}


void dis_bill_Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    NUM=-1;

    int SIZE;


    SIZE=GetNumB(Nama);
    char Location[180];
    LoC6(Location,Nama);
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    QString ITEM1 = item->text();
    strcpy(ITEMB,ITEM1.toStdString().c_str());
    qDebug()<<ITEMB;
    int ROW;
    ROW=ui->listWidget->currentRow();

    if(J==SIZE)
    {
        qDebug()<<"J==SIZE";
        for (int i=0; i<SIZE; i++)
        {
            qDebug()<<"ROW: "<<ROW<<"PT: "<<i;
            if(ROW==i)
            {
                NUM=ROW;
                break;
            }
            else
                NUM=-1;
        }
    }
    else
    {
        qDebug()<<"J!=SIZE";
        for (int i=0; i<J; i++)
        {
            qDebug()<<"ROW"<<ROW<<"pt: "<<i;
            if(ROW==i)
            {
                for(int k=0;k<SIZE;k++)
                {
                    if(k==pt2[i])
                    {
                        qDebug()<<"PT==PT2";
                        NUM=pt2[i];
                        break;
                    }
                    else
                    NUM=-1;
                }

            }
            else if(NUM!=-1)
                break;
          }
    }
    qDebug()<<ROW;
        ui->label_9->setText(D[NUM].Date);
        ui->label_10->setNum(D[NUM].Bill_No);
        ui->label_11->setNum(D[NUM].Rate);
        ui->label_12->setNum(D[NUM].QTY);
        ui->label_13->setNum(D[NUM].Discount);
        ui->label_14->setNum(D[NUM].Extra);
        ui->label_15->setText(D[NUM].Date);
        ui->label_16->setNum(D[NUM].Total);
        ui->label->setNum(D[NUM].Remain);

        strcpy(Name,D[NUM].Name);
        Bill_No=D[NUM].Bill_No;
        Rate=D[NUM].Rate;
        QTY=D[NUM].QTY;
        Discount=D[NUM].Discount;
        Extra=D[NUM].Extra;
        Total=D[NUM].Total;
        strcpy(Date,D[NUM].Date);
        Remain=D[NUM].Remain;

}

void dis_bill_Dialog::on_pushButton_clicked()
{
    if(ui->listWidget->currentRow()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
        return;
    }
    if(NUM==-1)
    {
        QMessageBox::information(this,"Warning","Please Select A Valid Object");
        return;
    }
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Confirmation Dialog", "Are you sure you want to delete the selected data?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
      } else {
        qDebug() << "Yes was *not* clicked";
        return;
      }
    int SIZE;
    SIZE=GetNumB(Nama);
    char Location[180];
    LoC6(Location,Nama);
    PutNumB(SIZE-1,Nama);
    Billing D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    for(int i=0,j=0;i<SIZE;i++)
    {
        if(NUM!=i)
        {
            D2[j]=D[i];
            j++;
            qDebug()<<"WRITTEN "<<i;
        }
        else
        qDebug()<<"DELETED "<<i;
    }

    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D2, sizeof(D2));
    fstream_ob2.close();
    QMessageBox::information(this,"Status","Information Deleted Successfully!");
    on_pushButton_2_clicked();
}



void dis_bill_Dialog::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    ui->label_4->clear();
    char Location[180];
    LoC6(Location,Nama);
    int SIZE;
    SIZE=GetNumB(Nama);
    J=SIZE;
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->listWidget->addItem(D[i].Name);
    }
    pt2 = new int[SIZE];
    for (int i=0; i<SIZE; i++)
        {
        pt2[i] = i;
        }
}

void dis_bill_Dialog::on_search_clicked()
{
    ui->listWidget->clear();
    float month_total=0;
    J=0;
    char Location[180],DT[15],temp2[15];
    int k,l;
    QString DT2 = ui->dateEdit->text();
    strcpy(DT,DT2.toStdString().c_str());
    qDebug()<<DT;
    int SIZE;
    LoC6(Location,Nama);
    SIZE=GetNumB(Nama);
    strcat(Location,".dat");
    ifstream fstream_ob;
    qDebug()<<Location;
    fstream_ob.open(Location,ios::binary|ios::in);
    Billing D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int j=0;j<SIZE;j++)
    {
        for(k=3,l=0;k<10;k++,l++)
        {
            temp2[l]=D[j].Date[k];
        }
        temp2[l]=NULL;
        qDebug()<<temp2;
        if(strcmp(temp2,DT)==0)
        {
            ui->listWidget->addItem(D[j].Name);
            month_total+=D[j].Total;
            J++;
        }
    }
    ui->label_4->setNum(month_total);
    qDebug()<<"J: "<<J;
    delete [] pt2;  // When done, free memory pointed to by a.
    pt2 = NULL;     // Clear a to prevent using invalid memory reference.
    pt2 = new int[J];
    for (int i=0,K=0; i<SIZE; i++)
    {
        for(k=3,l=0;k<10;k++,l++)
        {
            temp2[l]=D[i].Date[k];
        }
        temp2[l]=NULL;
        qDebug()<<temp2;
        if(strcmp(temp2,DT)==0)
        {
            pt2[K] = i;
            qDebug()<<"DATE: "<<temp2<<"PT2: "<<pt2[K]<<"PT1:"<<i;
            K++;
        }
    }
}


void dis_bill_Dialog::on_pushButton_3_clicked()
{
    edit_bill_Dialog D;
    D.SETDATA1(Name,Bill_No,Rate,QTY,Discount,Extra,Total,Date,Nama,Remain,ITEMB,NUM);
    D.setModal(true);
    D.exec();
}
