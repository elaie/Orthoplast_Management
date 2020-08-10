#ifndef ADDDOCDIALOG_H
#define ADDDOCDIALOG_H

#include <QDialog>
#include<string.h>
#include<doctor.h>
#include<QMessageBox>
namespace Ui {
class AddDocDialog;
}

class AddDocDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDocDialog(QWidget *parent = nullptr);
    ~AddDocDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddDocDialog *ui;
};

#endif // ADDDOCDIALOG_H
