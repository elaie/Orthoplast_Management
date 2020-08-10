#ifndef ALL_BILL_DIALOG_H
#define ALL_BILL_DIALOG_H

#include <QDialog>
#include<QMessageBox>
#include<billing.h>
#include<patient.h>
namespace Ui {
class All_Bill_Dialog;
}

class All_Bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    char Nama[60];
    void setName4(char *n);
    explicit All_Bill_Dialog(QWidget *parent = nullptr);
    ~All_Bill_Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_6_textChanged(const QString &arg1);

private:
    Ui::All_Bill_Dialog *ui;
};

#endif // ALL_BILL_DIALOG_H
