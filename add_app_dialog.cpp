#include "add_app_dialog.h"
#include "ui_add_app_dialog.h"

Add_app_Dialog::Add_app_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_app_Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
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
    ui->comboBox->addItem(D[i].NAME);
    LoC2(Location);
    SIZE=GetNumP();
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D2[SIZE];
    fstream_ob.read( (char *) & D2, sizeof(D2));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    ui->comboBox_2->addItem((D2[i].NAME));
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
    QTime time=QTime::currentTime();
    ui->timeEdit->setTime(time);
}

Add_app_Dialog::~Add_app_Dialog()
{
    delete ui;
}

void Add_app_Dialog::on_pushButton_clicked()
{
    char DoC_Name[60];
    char PaT_Name[60];
    char Visit_Type[10];
    char Time[10];
    char Date[15];
    QString VT;
    QString DNAME=ui->comboBox->currentText();
    QString PNAME=ui->comboBox_2->currentText();
    if(ui->radioButton->isChecked())
        VT=ui->radioButton->text();
    else if(ui->radioButton_2->isChecked())
        VT=ui->radioButton_2->text();
    QString TM=ui->timeEdit->text();
    QString DT=ui->dateEdit->text();
    qDebug()<<VT;
    strcpy(DoC_Name,DNAME.toStdString().c_str());
    strcpy(PaT_Name,PNAME.toStdString().c_str());
    strcpy(Visit_Type,VT.toStdString().c_str());
    strcpy(Time,TM.toStdString().c_str());
    strcpy(Date,DT.toStdString().c_str());
    AddDataA(DoC_Name,PaT_Name,Visit_Type,Time,Date);
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}
