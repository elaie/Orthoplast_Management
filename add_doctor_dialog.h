#ifndef ADD_DOCTOR_DIALOG_H
#define ADD_DOCTOR_DIALOG_H

#include <QDialog>
#include<QtWidgets>
namespace Ui {
class Add_Doctor_Dialog;
}

class Add_Doctor_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Doctor_Dialog(QWidget *parent = nullptr);
    ~Add_Doctor_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_Doctor_Dialog *ui;
};

#endif // ADD_DOCTOR_DIALOG_H
