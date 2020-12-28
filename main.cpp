#include "mainwindow.h"
#include "calcprog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    CalcProg wnd;
    wnd.show();
    return a.exec();
}
