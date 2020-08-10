#include "dis_pdetails_dialog.h"
#include "ui_dis_pdetails_dialog.h"

dis_pdetails_Dialog::dis_pdetails_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dis_pdetails_Dialog)
{

}
void dis_pdetails_Dialog::setDataName3(char *n)
{
    char Location[180];
    LoC3(Location);
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    int SIZE;
    char temp[280];
    strcpy(PNAME,n);
    strcpy(temp,Location);
    strcat(temp,PNAME);
    strcat(temp,".dat");
    qDebug()<<temp;
    SIZE=GetNumI(PNAME);
    qDebug()<<"PNAME: "<<PNAME<<"temp"<<temp;
    ifstream fstream_ob;
    fstream_ob.open(temp,ios::binary|ios::in);
    Patient_Details D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    ui->comboBox->addItem(D[i].IDATE);
}
dis_pdetails_Dialog::~dis_pdetails_Dialog()
{
    delete ui;
}
char temp[60];
void dis_pdetails_Dialog::on_comboBox_activated(const QString &arg1)
{
    char Location[180];
    LoC3(Location);
    int SIZE;
    ID=ui->comboBox->currentIndex();
    qDebug()<<"ID: "<<ID;
    strcpy(DT,arg1.toStdString().c_str());
    qDebug()<<"DT: "<<DT<<"ARG1"<<arg1;
    strcpy(temp,Location);
    strcat(temp,PNAME);
    strcat(temp,".dat");
    qDebug()<<"TEMP: "<<temp<<"PNAME"<<PNAME;
    qDebug()<<"DT: "<<DT<<"ARG1"<<arg1;
    SIZE=GetNumI(PNAME);
    int Point[SIZE];
    for(int i=0;i<SIZE;i++)
        Point[i]=i;
    ifstream fstream_ob;
    fstream_ob.open(temp,ios::binary|ios::in);
    Patient_Details D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    qDebug()<<"INFO: "<<D[1].info;
    for(int i=0;i<SIZE;i++)
    {
        qDebug()<<"ID "<<ID<<"POINT "<<Point[i];
        qDebug()<<"DT"<<DT<<"DATE"<<D[i].IDATE;
        if(strcmp(DT,D[i].IDATE)==0&&ID==Point[i])
           { ui->textBrowser->setText(D[i].info);
        break;
        }
    }
    fstream_ob.close();
}

void dis_pdetails_Dialog::on_pushButton_clicked()
{
    if(ui->comboBox->currentIndex()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
        return;
    }
    int SIZE,ID;
    ID=ui->comboBox->currentIndex();
    SIZE=GetNumI(PNAME);
    int Point[SIZE];
    for(int i=0;i<SIZE;i++)
        Point[i]=i;
    Patient_Details D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(temp,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    qDebug()<<"DETETING ID: "<<ID;
    for(int i=0,j=0;i<SIZE;i++)
    {
        if(strcmp(DT,D[i].IDATE)==0&&ID==i)
            qDebug()<<"DATA DELETED ";
        else
        {
            D2[j]=D[i];
            j++;
        }
    }
    fstream_ob.close();
    fstream_ob2.open(temp,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D2, sizeof(D2));
    fstream_ob2.close();
    PutNumI(PNAME,--SIZE);
    QMessageBox::information(this,"Status","Information Deleted Successfully!");
    ui->comboBox->clear();
    ui->textBrowser->clear();
    for(int i=0;i<SIZE;i++)
        ui->comboBox->addItem(D2[i].IDATE);
}
