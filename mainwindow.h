#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "calcprog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public :
     explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
  
    void digits_numbers();
    void on_pushButton_dot_clicked();

    void on_pushButton_Erase_clicked();
    void operations();

    void on_another_wnd_clicked();

private:
    Ui::MainWindow *ui;
    CalcProg *wnd_cacl;
};
#endif // MAINWINDOW_H
