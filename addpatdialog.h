#ifndef ADDPATDIALOG_H
#define ADDPATDIALOG_H

#include <QDialog>
#include<string.h>
#include<patient.h>
#include<QMessageBox>
#include<doctor.h>
namespace Ui {
class AddPatDialog;
}

class AddPatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPatDialog(QWidget *parent = nullptr);
    ~AddPatDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddPatDialog *ui;
};

#endif // ADDPATDIALOG_H
