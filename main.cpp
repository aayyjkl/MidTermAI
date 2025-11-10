#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow x;
    w.setGeometry(160,240,800,600);
    w.show();
    x.setGeometry(960,240,800,600);
    x.show();
    return a.exec();
}
