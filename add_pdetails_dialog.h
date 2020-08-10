#ifndef ADD_PDETAILS_DIALOG_H
#define ADD_PDETAILS_DIALOG_H

#include <QDialog>
#include<string.h>
#include<patient_details.h>
#include<QMessageBox>
namespace Ui {
class Add_PDetails_Dialog;
}

class Add_PDetails_Dialog : public QDialog
{
    Q_OBJECT

public:
    char PNAME[60];
    explicit Add_PDetails_Dialog(QWidget *parent = nullptr);
    ~Add_PDetails_Dialog();
     void setDataName2(char *n);
private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

private:
    Ui::Add_PDetails_Dialog *ui;
};

#endif // ADD_PDETAILS_DIALOG_H
