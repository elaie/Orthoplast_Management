#ifndef ADD_BILL_DIALOG_H
#define ADD_BILL_DIALOG_H

#include <QDialog>
#include<QMessageBox>
#include<billing.h>
#include<patient.h>
namespace Ui {
class add_bill_Dialog;
}

class add_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    char Nama[60];
    void setData3(char *n);
    explicit add_bill_Dialog(QWidget *parent = nullptr);
    ~add_bill_Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::add_bill_Dialog *ui;
};

#endif // ADD_BILL_DIALOG_H
