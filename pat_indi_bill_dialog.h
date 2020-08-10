#ifndef PAT_INDI_BILL_DIALOG_H
#define PAT_INDI_BILL_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<billing.h>
int get_SIZE();
namespace Ui {
class pat_indi_bill_Dialog;
}

class pat_indi_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    void setDataName3(char *n);
    int COUNT=0;
    float TOTAL=0;
    char NAMAWA[60];
    explicit pat_indi_bill_Dialog(QWidget *parent = nullptr);
    ~pat_indi_bill_Dialog();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::pat_indi_bill_Dialog *ui;
};

#endif // PAT_INDI_BILL_DIALOG_H
