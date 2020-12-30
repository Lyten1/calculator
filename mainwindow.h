#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
<<<<<<< HEAD
#include "calcprogam.h"

=======
#include "calcprog.h"
#include "calcbasic.h"
>>>>>>> 071ec3dc430b1fc8f49acd2417208f0906cad2d9
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
    void algebraOperations();
    void operations();

    void result();

    void on_calculation_type_activated(const QString &arg1);

private:
    double m_firstNum = 0;
    QString m_operator = " ";
    double m_secondNum = 0;
    Ui::MainWindow *ui;
<<<<<<< HEAD
    CalcProgam *wnd_cacl;
=======
    CalcProg *wnd_cacl;
    CalcBasic *base_calc;
>>>>>>> 071ec3dc430b1fc8f49acd2417208f0906cad2d9
};
#endif // MAINWINDOW_H
