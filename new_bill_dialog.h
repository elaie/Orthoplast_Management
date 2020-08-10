#ifndef NEW_BILL_DIALOG_H
#define NEW_BILL_DIALOG_H

#include <QDialog>
#include<add_bill_dialog.h>
#include<all_bill_dialog.h>
namespace Ui {
class new_bill_Dialog;
}

class new_bill_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit new_bill_Dialog(QWidget *parent = nullptr);
    ~new_bill_Dialog();

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
    Ui::new_bill_Dialog *ui;
};

#endif // NEW_BILL_DIALOG_H
