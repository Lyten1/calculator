#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    QString on_pushButton_clicked();

    void on_pushButton_0_clicked();
    void digits_numbers();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
