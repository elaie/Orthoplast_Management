#include "display_pat_dialog.h"
#include "ui_display_pat_dialog.h"
int FLAG=-1,I2;
char ITEMP[60];
display_pat_Dialog::display_pat_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::display_pat_Dialog)
{
    char Location[180];
    LoC2(Location);
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    int SIZE;
    SIZE=GetNumP();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    for(int i=0;i<SIZE;i++)
    {
        ui->comboBox->addItem(D[i].NAME);
        ui->listWidget->addItem(D[i].NAME);
    }
}

display_pat_Dialog::~display_pat_Dialog()
{
    delete ui;
}

void display_pat_Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int SIZE;
    SIZE=GetNumP();
    int* Point = NULL;   // Pointer to int, initialize to nothing.
    Point = new int[SIZE];  // Allocate n ints and save ptr in a.
    for (int i=0; i<SIZE; i++) {
        Point[i] = i;
        qDebug()<<"Point: "<<Point[i];
    }
    char Location[180];
    LoC2(Location);
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    QString ITEM1 = item->text();
    strcpy(ITEMP,ITEM1.toStdString().c_str());
    qDebug()<<ITEMP;
    int ROW;
    ROW=ui->listWidget->currentRow()+1;
    if(FLAG==-1)
        I2=ROW-1;
    else
        I2=FLAG;
    qDebug()<<"ROW: "<<ROW<<"FLAG: "<<FLAG;
        ui->NAMEE->setText(D[I2].NAME);
        ui->ADDE->setText(D[I2].ADD);
        ui->DOBE->setText(D[I2].DOB);
        ui->PHNOE->setText(D[I2].PHNO);
        ui->EMAILE->setText(D[I2].EMAIL);
        ui->GENDERE->setText(D[I2].GEN);
        ui->BLOODE->setText(D[I2].BLOOD_G);
        ui->REFBY->setText(D[I2].REF);

        strcpy(NAME,D[I2].NAME);
        strcpy(ADD,D[I2].ADD);
        strcpy(DOB,D[I2].DOB);
        strcpy(PHNO,D[I2].PHNO);
        strcpy(EMAIL,D[I2].EMAIL);
        strcpy(GEN,D[I2].GEN);
        strcpy(BLOOD_G,D[I2].BLOOD_G);
        strcpy(REF,D[I2].REF);
}

void display_pat_Dialog::on_pushButton_3_clicked()
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
    SIZE=GetNumP();
    int* Point = NULL;   // Pointer to int, initialize to nothing.
    Point = new int[SIZE];  // Allocate n ints and save ptr in a.
    for (int i=0; i<SIZE; i++) {
        Point[i] = i;
        qDebug()<<"Point: "<<Point[i];
    }
    char Location[180];
    LoC2(Location);
    PutNumP(SIZE-1);
    Patient D[SIZE],D2[SIZE-1];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));

    char temp[60],temp2[60];
    char Location2[180],Location3[180];
    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);



    for(int i=0,j=0;i<SIZE;i++)
    {
        if(strcmp(D[i].NAME,ITEMP)==0&&Point[i]==i)
        {
            for(int J=0;J<5;J++)
            {
                switch(J)
                {
                case 0:
                    strcpy(temp,"_MHO.dat");
                    strcpy(temp2,"_MHO_N.txt");
                    break;
                case 1:
                    strcpy(temp,"_CMO.dat");
                    strcpy(temp2,"_CMO_N.txt");
                    break;
                case 2:
                    strcpy(temp,"_FND.dat");
                    strcpy(temp2,"_FND_N.txt");
                    break;
                case 3:
                    strcpy(temp,"_INV.dat");
                    strcpy(temp2,"_INV_N.txt");
                    break;
                case 4:
                    strcpy(temp,"_PHY.dat");
                    strcpy(temp2,"_PHY_N.txt");

                    break;
                }
                strcpy(Location2,LOC.toStdString().c_str());
                strcat(Location2,"/Hospital Management/Data/Info/");
                strcat(Location2,D[i].NAME);
                strcpy(Location3,Location2);
                strcat(Location3,temp2);
                strcat(Location2,temp);
                if (remove(Location2) == 0&&remove(Location3)==0)
                      qDebug()<<"Deleted successfully";
                   else
                      qDebug()<<"Unable to delete the file";
                qDebug()<<"Data Deleted ";
            }
        }
        else
        {
            qDebug()<<i<<ITEMP<<D[i].NAME;
            D2[j]=D[i];
            j++;
        }
    }
    FLAG=-1;
    fstream_ob.close();
    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D2, sizeof(D2));
    fstream_ob2.close();
    QMessageBox::information(this,"Status","Information Deleted Successfully!");
    ui->listWidget->clear();
    for(int i=0;i<SIZE-1;i++)
    ui->listWidget->addItem(D2[i].NAME);
}

void display_pat_Dialog::on_pushButton_4_clicked()
{
    char Location[180];
    LoC2(Location);
    int SIZE;
    FLAG=-1;
    SIZE=GetNumP();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    ui->listWidget->clear();
    for(int i=0;i<SIZE;i++)
    ui->listWidget->addItem(D[i].NAME);
}

void display_pat_Dialog::on_pushButton_clicked()
{
    char Location[180];
    LoC2(Location);
    int SIZE;
    char temp[60];
    QString temp2=ui->comboBox->currentText();
    strcpy(temp,temp2.toStdString().c_str());
    SIZE=GetNumP();
    ifstream fstream_ob;
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D[SIZE];
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();
    ui->listWidget->clear();
    for(int i=0;i<SIZE;i++)
    if(strcmp(D[i].NAME,temp)==0)
    {
        qDebug()<<"SAME NAME FOUND ";
        FLAG=i;
        ui->listWidget->addItem(D[i].NAME);
    }
}

void display_pat_Dialog::on_pushButton_2_clicked()
{
    if(ui->listWidget->currentRow()==-1)
    {
        QMessageBox::information(this,"Error","Please select a Valid Index!");
        return;
    }
    Patient_Info_Dialog D;
    D.setDataName(ITEMP);
    D.setModal(true);
    D.exec();
}

void display_pat_Dialog::on_pushButton_5_clicked()
{
    edit_pat_Dialog D;
    D.SETDATA1(NAME,ADD,DOB,PHNO,EMAIL,GEN,BLOOD_G,REF,ITEMP,I2);
    D.setModal(true);
    D.exec();
}
