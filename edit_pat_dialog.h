#ifndef EDIT_PAT_DIALOG_H
#define EDIT_PAT_DIALOG_H

#include <QDialog>
#include<patient.h>
#include<doctor.h>
#include<QMessageBox>
namespace Ui {
class edit_pat_Dialog;
}

class edit_pat_Dialog : public QDialog
{
    Q_OBJECT

public:

    void SETDATA1(char *N,char *A,char *DO,char *P,char *E,char *G,char *BG,char *ref,char *ITEMP2,int FLAG);
    explicit edit_pat_Dialog(QWidget *parent = nullptr);
    ~edit_pat_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::edit_pat_Dialog *ui;
};

#endif // EDIT_PAT_DIALOG_H
