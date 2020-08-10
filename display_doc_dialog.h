#ifndef DISPLAY_DOC_DIALOG_H
#define DISPLAY_DOC_DIALOG_H

#include <QDialog>
#include<QtWidgets>
#include<fstream>
#include<string.h>
#include<doctor.h>
#include<QDebug>
namespace Ui {
class Display_Doc_Dialog;
}

class Display_Doc_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Display_Doc_Dialog(QWidget *parent = nullptr);
    ~Display_Doc_Dialog();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_psuhDelete_clicked();

private:
    Ui::Display_Doc_Dialog *ui;
};

#endif // DISPLAY_DOC_DIALOG_H
