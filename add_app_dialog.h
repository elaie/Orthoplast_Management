#ifndef ADD_APP_DIALOG_H
#define ADD_APP_DIALOG_H

#include <QDialog>
#include<doctor.h>
#include<patient.h>
#include<appointment.h>
#include<QMessageBox>
namespace Ui {
class Add_app_Dialog;
}

class Add_app_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_app_Dialog(QWidget *parent = nullptr);
    ~Add_app_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_app_Dialog *ui;
};

#endif // ADD_APP_DIALOG_H
