#ifndef DIS_BILL_DIALOG_H
#define DIS_BILL_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<billing.h>
#include<edit_bill_dialog.h>
namespace Ui {
class dis_bill_Dialog;
}

class dis_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    char Nama[60];
    char Name[60];
    float Bill_No;
    float Rate;
    float QTY;
    float Discount;
    float Extra;
    float Total;
    float Remain;
    char Date[15];
    int* pt2=NULL;
    void setData3(char *n);
    explicit dis_bill_Dialog(QWidget *parent = nullptr);
    ~dis_bill_Dialog();

private slots:
    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_pushButton_2_clicked();

    void on_search_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dis_bill_Dialog *ui;
};

#endif // DIS_BILL_DIALOG_H
