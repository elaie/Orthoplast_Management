#ifndef NEW_DIS_BILL_DIALOG_H
#define NEW_DIS_BILL_DIALOG_H

#include <QDialog>
#include<dis_bill_dialog.h>
#include<dis_total_bill_dialog.h>
namespace Ui {
class new_dis_bill_Dialog;
}

class new_dis_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit new_dis_bill_Dialog(QWidget *parent = nullptr);
    ~new_dis_bill_Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::new_dis_bill_Dialog *ui;
};

#endif // NEW_DIS_BILL_DIALOG_H
