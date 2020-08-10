#include "mainwindow.h"
#include <QApplication>
#include<Qt>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setAttribute(Qt::AA_DisableWindowContextHelpButton);
    QApplication::setStyle("fusion");
    MainWindow w;
    w.show();
    return a.exec();
}
