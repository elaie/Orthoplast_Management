#include "add_pdetails_dialog.h"
#include "ui_add_pdetails_dialog.h"

Add_PDetails_Dialog::Add_PDetails_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_PDetails_Dialog)
{

}
void Add_PDetails_Dialog::setDataName2(char *n)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    setWindowIcon(QIcon(":/new/prefix1/logo NEW.JPG"));
    ui->label->setText("Add Information");
    strcpy(PNAME,n);
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
}
Add_PDetails_Dialog::~Add_PDetails_Dialog()
{
    delete ui;
}

void Add_PDetails_Dialog::on_pushButton_clicked()
{
    char info[800];
    char date[15];
    int sz;
    QString DOB1=ui->dateEdit->text();
    QString text = ui->textEdit->toPlainText();
    sz=text.size();
    if(sz>800)
    {
        QMessageBox::information(this,"Status","Text Limit Reached, Cannot add more than 800 letters");
        return;
    }
    strcpy(info,text.toStdString().c_str());
    strcpy(date,DOB1.toStdString().c_str());
    AddDataP(info,date,PNAME);
    QMessageBox::information(this,"Status","Information Added Successfully!");
    close();
}

void Add_PDetails_Dialog::on_textEdit_textChanged()
{
    QString info;
    int sz;
    info = ui->textEdit->toPlainText();
    sz=info.size();
    ui->val->setNum(sz);
}
