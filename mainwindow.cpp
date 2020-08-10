#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/new/prefix1/unnamed.jpg");
    ui->label->setPixmap(pix.scaled(500,2000,Qt::KeepAspectRatio));
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    QString LOC;
    QStringList loc;
    char L[280],L2[280];
    loc = QStandardPaths::standardLocations(QStandardPaths::GenericConfigLocation);
    LOC=loc.at(0);
    qDebug()<<LOC;
    strcpy(L,LOC.toStdString().c_str());
    strcat(L,"/license.dat");
    fstream file;
    file.open(L,ios::in|ios::binary);
    file.read((char *)&L2,sizeof(L2));
    file.close();
    if(strcmp(L2,"KAJfhuwSAKFbkqwfbASMNFbqwkhbf2iuBASfk")!=0)
    {
        QMessageBox::information(this,"Warning","No Licesne Detected! Please Install A License and try again!");
        exit(0);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_doc_clicked()
{
    AddDocDialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_dis_doc_clicked()
{
    Display_Doc_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_add_pat_clicked()
{
   AddPatDialog D;
   D.setModal(true);
   D.exec();
}

void MainWindow::on_dis_pat_clicked()
{
    display_pat_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_new_app_clicked()
{
    Add_app_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_dis_app_clicked()
{
    Dis_app_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_new_bill_clicked()
{
    new_bill_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_display_bill_clicked()
{
    new_dis_bill_Dialog D;
    D.setModal(true);
    D.exec();
}

void MainWindow::on_actionBackup_triggered()
{
    QMessageBox::information(this,"Information","Click OK to Continue. This may take a while, Please Do you turn off your computer or exit the program untill this process is completed!");
    Backup B;
    ui->statusbar->showMessage("Backing up your Data, Please wait");
    B.Doctor_Backup();
    B.Patient_Backup();
    B.Patient_Details_Backup();
    B.Billing_Backup();
    B.Appointment_Backup();
    ui->statusbar->showMessage("Data Backup Completed!",1000);
    QMessageBox::information(this,"Information","Backup Completed!");
}

void MainWindow::on_actionRestore_triggered()
{
    QMessageBox::information(this,"Information","Click OK to Continue. This may take a while, Please Do you turn off your computer or exit the program untill this process is completed!");
    Backup B;
    ui->statusbar->showMessage("Restoring your Data, Please wait");
    B.Doctor_Restore();
    B.Patient_Restore();
    B.Patient_Details_Restore();
    B.Billing_Restore();
    B.Appointment_Restore();
    ui->statusbar->showMessage("Data Restore Completed!",1000);
    QMessageBox::information(this,"Information","Restore Completed!");
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}
