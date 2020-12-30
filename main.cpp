#include "mainwindow.h"
#include <QApplication>
#include "calcprog.h"
#include "calcprogam.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    CalcProgam wnd;
//    wnd.show();
    return a.exec();
}
