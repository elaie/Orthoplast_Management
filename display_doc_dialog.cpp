#include "display_doc_dialog.h"
#include "ui_display_doc_dialog.h"
Display_Doc_Dialog::Display_Doc_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Display_Doc_Dialog)
{
    char Location[180];
    LoC(Location);
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    int SIZE;
    SIZE=GetNum();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Doctor D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    ui->listWidget->addItem(D[i].NAME);

}
char ITEM[60];
Display_Doc_Dialog::~Display_Doc_Dialog()
{
    delete ui;
}

void Display_Doc_Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    char Location[180];
    LoC(Location);
    int SIZE;
    SIZE=GetNum();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Doctor D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    QString ITEM1 = item->text();

    strcpy(ITEM,ITEM1.toStdString().c_str());
    qDebug()<<ITEM;
    int ROW,I;
    ROW=ui->listWidget->currentRow()+1;
    I=ROW-1;
    qDebug()<<ROW;
    ui->LName->setText(D[I].NAME);
    ui->LAdd->setText(D[I].ADD);
    ui->LSpec->setText(D[I].SPEC);
    ui->LPhno->setText(D[I].PHNO);
    ui->LEmail->setText(D[I].EMAIL);
}

void Display_Doc_Dialog::on_psuhDelete_clicked()
{
    if(ui->listWidget->currentRow()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
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
    char Location[180];
    LoC(Location);
    SIZE=GetNum();
    PutNum(SIZE-1);
    Doctor D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    for(int i=0,j=0;i<SIZE;i++)
    {
        if(strcmp(D[i].NAME,ITEM)!=0)
        {
            qDebug()<<i<<ITEM<<D[i].NAME;
            D2[j]=D[i];
            j++;
        }
        qDebug()<<i<<j;
    }

    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D2, sizeof(D2));
    fstream_ob2.close();
    QMessageBox::information(this,"Status","Information Deleted Successfully!");
    ui->listWidget->clear();
    for(int i=0;i<SIZE-1;i++)
    ui->listWidget->addItem(D2[i].NAME);
}
