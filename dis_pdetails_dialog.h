#ifndef DIS_PDETAILS_DIALOG_H
#define DIS_PDETAILS_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<fstream>
#include<string.h>
#include<patient.h>
#include<QDebug>
#include<patient_details.h>

namespace Ui {
class dis_pdetails_Dialog;
}

class dis_pdetails_Dialog : public QDialog
{
    Q_OBJECT

public:
    char PNAME[60],DT[15];
    int ID;
    explicit dis_pdetails_Dialog(QWidget *parent = nullptr);
    ~dis_pdetails_Dialog();
    void setDataName3(char *n);
private slots:


    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::dis_pdetails_Dialog *ui;
};

#endif // DIS_PDETAILS_DIALOG_H
