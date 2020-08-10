#include "dis_app_dialog.h"
#include "ui_dis_app_dialog.h"
int j;
Dis_app_Dialog::Dis_app_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dis_app_Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    QDate date= QDate::currentDate();
    ui->dateEdit->setDate(date);
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    j=SIZE;
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->comboBox->addItem(D[i].PaT_Name);
        ui->listWidget->addItem(D[i].PaT_Name);
        ui->listWidget_2->addItem(D[i].DoC_Name);
    }
    pt2 = new int[SIZE];
    for (int i=0; i<SIZE; i++)
        {
        pt2[i] = i;
        }
}
char APPITEM[60];
int I;
Dis_app_Dialog::~Dis_app_Dialog()
{
    delete ui;
}
void Dis_app_Dialog::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    I=-1;
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    QString ITEM1 = item->text();
    strcpy(APPITEM,ITEM1.toStdString().c_str());
    qDebug()<<APPITEM;
    int ROW;
    ROW=ui->listWidget_2->currentRow();
    qDebug()<<"ROW: "<<ROW;
    if(j==SIZE)
    {
        qDebug()<<"J==SIZE";
        for (int i=0; i<SIZE; i++)
        {
            qDebug()<<"ROW: "<<ROW<<"PT: "<<i;
            if(ROW==i)
            {
                I=ROW;
                break;
            }
            else
                I=-1;
        }
    }
    else
    {
        qDebug()<<"J!=SIZE";
        for (int i=0; i<j; i++)
        {
            qDebug()<<"ROW"<<ROW<<"pt: "<<i;
            if(ROW==i)
            {
                for(int k=0;k<SIZE;k++)
                {
                    if(k==pt2[i])
                    {
                        qDebug()<<"PT==PT2";
                        I=pt2[i];
                        break;
                    }
                    else
                    I=-1;
                }

            }
            else if(I!=-1)
                break;
          }
    }
    qDebug()<<ROW;
    ui->label_6->setText(D[I].PaT_Name);
    ui->label_7->setText(D[I].DoC_Name);
    ui->label_8->setText(D[I].Visit_Type);
    ui->label_9->setText(D[I].Date);
    ui->label_10->setText(D[I].Time);
}

void Dis_app_Dialog::on_pushButton_clicked()
{
    ui->listWidget_2->clear();
    ui->listWidget->clear();
    j=0;
    char DATE5[15];
    QString DATE6=ui->dateEdit->text();
    strcpy(DATE5,DATE6.toStdString().c_str());
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();

    for (int i=0; i<SIZE; i++)
    {
        if(strcmp(DATE5,D[i].Date)==0)
        {
            ui->listWidget_2->addItem(D[i].DoC_Name);
            ui->listWidget->addItem(D[i].PaT_Name);
            j++;
        }
    }
    qDebug()<<"J: "<<j;
    delete [] pt2;  // When done, free memory pointed to by a.
    pt2 = NULL;     // Clear a to prevent using invalid memory reference.
    pt2 = new int[j];
    for (int i=0,k=0; i<SIZE; i++)
    {
        if(strcmp(DATE5,D[i].Date)==0)
        {
            pt2[k] = i;
            qDebug()<<"PT2: "<<pt2[k]<<"PT1:"<<i;
            k++;
        }
    }
}

void Dis_app_Dialog::on_pushButton_2_clicked()
{
    char TEMP[60];
    QString TEMP2=ui->comboBox->currentText();
    strcpy(TEMP,TEMP2.toStdString().c_str());
    ui->listWidget_2->clear();
    ui->listWidget->clear();
    j=0;
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();

    for (int i=0; i<SIZE; i++)
    {
        if(strcmp(TEMP,D[i].PaT_Name)==0)
        {
            ui->listWidget_2->addItem(D[i].DoC_Name);
            ui->listWidget->addItem(D[i].PaT_Name);
            j++;
        }
    }
    qDebug()<<"J: "<<j;
    delete [] pt2;  // When done, free memory pointed to by a.
    pt2 = NULL;     // Clear a to prevent using invalid memory reference.
    pt2 = new int[j];
    for (int i=0,k=0; i<SIZE; i++)
    {
        if(strcmp(TEMP,D[i].PaT_Name)==0)
        {
            pt2[k] = i;
            qDebug()<<"PT2: "<<pt2[k]<<"PT1:"<<i;
            k++;
        }
    }
}

void Dis_app_Dialog::on_pushButton_6_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    j=SIZE;
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->comboBox->addItem(D[i].PaT_Name);
        ui->listWidget->addItem(D[i].PaT_Name);
        ui->listWidget_2->addItem(D[i].DoC_Name);
    }
    pt2 = new int[SIZE];
    for (int i=0; i<SIZE; i++)
        {
        pt2[i] = i;
        }
}

void Dis_app_Dialog::on_pushButton_5_clicked()
{
    if(ui->listWidget_2->currentRow()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
        return;
    }
    if(I==-1)
    {
        QMessageBox::information(this,"Warning","Please Select A Valid Object");
        return;
    }
    qDebug()<<"I: "<<I;
    char Location[180];
    LoC5(Location);
    int SIZE=GetNumA();
    PutNumA(SIZE-1);
    Appointment D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    for(int i=0,j=0;i<SIZE;i++)
    {
        if(I!=i)
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
    on_pushButton_6_clicked();
}

void Dis_app_Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    I=-1;
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    QString ITEM1 = item->text();
    strcpy(APPITEM,ITEM1.toStdString().c_str());
    qDebug()<<APPITEM;
    int ROW;
    ROW=ui->listWidget->currentRow();
    qDebug()<<"ROW: "<<ROW;
    if(j==SIZE)
    {
        qDebug()<<"J==SIZE";
        for (int i=0; i<SIZE; i++)
        {
            qDebug()<<"ROW: "<<ROW<<"PT: "<<i;
            if(ROW==i)
            {
                I=ROW;
                break;
            }
            else
                I=-1;
        }
    }
    else
    {
        qDebug()<<"J!=SIZE";
        for (int i=0; i<j; i++)
        {
            qDebug()<<"ROW"<<ROW<<"pt: "<<i;
            if(ROW==i)
            {
                for(int k=0;k<SIZE;k++)
                {
                    if(k==pt2[i])
                    {
                        qDebug()<<"PT==PT2";
                        I=pt2[i];
                        break;
                    }
                    else
                    I=-1;
                }

            }
            else if(I!=-1)
                break;
          }
    }
    qDebug()<<ROW;
    ui->label_6->setText(D[I].PaT_Name);
    ui->label_7->setText(D[I].DoC_Name);
    ui->label_8->setText(D[I].Visit_Type);
    ui->label_9->setText(D[I].Date);
    ui->label_10->setText(D[I].Time);
}

void Dis_app_Dialog::on_pushButton_4_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    char Location[180];
    LoC5(Location);
    int SIZE;
    SIZE=GetNumA();
    j=SIZE;
    ifstream fstream_ob;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    Appointment D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->comboBox->addItem(D[i].PaT_Name);
        ui->listWidget->addItem(D[i].PaT_Name);
        ui->listWidget_2->addItem(D[i].DoC_Name);
    }
    pt2 = new int[SIZE];
    for (int i=0; i<SIZE; i++)
        {
        pt2[i] = i;
        }
}

void Dis_app_Dialog::on_pushButton_3_clicked()
{
    if(ui->listWidget->currentRow()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
        return;
    }
    if(I==-1)
    {
        QMessageBox::information(this,"Warning","Please Select A Valid Object");
        return;
    }
    qDebug()<<"I: "<<I;
    char Location[180];
    LoC5(Location);
    int SIZE=GetNumA();
    PutNumA(SIZE-1);
    Appointment D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    strcat(Location,".dat");
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    for(int i=0,j=0;i<SIZE;i++)
    {
        if(I!=i)
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
    on_pushButton_6_clicked();
}
