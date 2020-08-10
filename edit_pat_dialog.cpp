#include "edit_pat_dialog.h"
#include "ui_edit_pat_dialog.h"

edit_pat_Dialog::edit_pat_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_pat_Dialog)
{
}
char ITEMP1[60];
int FLAG1;
void edit_pat_Dialog::SETDATA1(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref,char *ITEMP2,int FLAG)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    strcpy(ITEMP1,ITEMP2);
    FLAG1=FLAG;
    qDebug()<<"FLAG"<<FLAG1;
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
    ui->comboBox_3->addItem(D[i].NAME);


    SIZE=GetNumP();
    int* Point = NULL;   // Pointer to int, initialize to nothing.
    Point = new int[SIZE];  // Allocate n ints and save ptr in a.
    for (int i=0; i<SIZE; i++) {
        Point[i] = i;
        qDebug()<<"Point: "<<Point[i];
    }
    LoC2(Location);
    fstream_ob.open(Location,ios::binary|ios::in);
    Patient D1[SIZE];
    fstream_ob.read( (char *) & D1, sizeof(D1));
    fstream_ob.close();

    ui->NameE->setText(N);
    ui->AddE->setText(A);
    ui->AgeE->setText(DO);
    ui->PhnoE->setText(P);
    ui->EmailE->setText(E);
    ui->comboBox->setCurrentText(G);
    ui->comboBox_2->setCurrentText(BG);
    ui->comboBox_3->setCurrentText(ref);

}
edit_pat_Dialog::~edit_pat_Dialog()
{
    delete ui;
}

void edit_pat_Dialog::on_pushButton_clicked()
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
    Patient D[SIZE];
    ifstream fstream_ob;
    ofstream fstream_ob2;
    fstream_ob.open(Location,ios::binary|ios::in);
    fstream_ob.read( (char *) & D, sizeof(D));
    fstream_ob.close();

    QString LOC;
    QStringList loc;
    loc = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation);
    LOC=loc.at(0);

    QString NAME1=ui->NameE->text();
    QString ADD1=ui->AddE->text();
    QString DOB1=ui->AgeE->text();
    QString PHNO1=ui->PhnoE->text();
    QString EMAIL1=ui->EmailE->text();
    QString GEN1=ui->comboBox->currentText();
    QString BLOODG1=ui->comboBox_2->currentText();
    QString REF3=ui->comboBox_3->currentText();

    strcpy(D[FLAG1].NAME,NAME1.toStdString().c_str());
    strcpy(D[FLAG1].ADD,ADD1.toStdString().c_str());
    strcpy(D[FLAG1].DOB,DOB1.toStdString().c_str());
    strcpy(D[FLAG1].PHNO,PHNO1.toStdString().c_str());
    strcpy(D[FLAG1].EMAIL,EMAIL1.toStdString().c_str());
    strcpy(D[FLAG1].GEN,GEN1.toStdString().c_str());
    strcpy(D[FLAG1].BLOOD_G,BLOODG1.toStdString().c_str());
    strcpy(D[FLAG1].REF,REF3.toStdString().c_str());

    fstream_ob2.open(Location,ios::binary|ios::out);
    fstream_ob2.write( (char *) & D, sizeof(D));
    fstream_ob2.close();
    QMessageBox::information(this,"Status","Information Edited Successfully!");
    close();

}
