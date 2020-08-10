#ifndef DIS_TOTAL_BILL_DIALOG_H
#define DIS_TOTAL_BILL_DIALOG_H

#include <QDialog>
#include<billing.h>
#include<fstream>
namespace Ui {
class dis_total_bill_Dialog;
}

class dis_total_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dis_total_bill_Dialog(QWidget *parent = nullptr);
    ~dis_total_bill_Dialog();

private slots:
    void on_pushButton_clicked();

    void on_label_6_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

private:
    Ui::dis_total_bill_Dialog *ui;
};

#endif // DIS_TOTAL_BILL_DIALOG_H
