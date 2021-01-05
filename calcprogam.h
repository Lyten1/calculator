#ifndef CALCPROGAM_H
#define CALCPROGAM_H

#include <QMainWindow>

namespace Ui {
class CalcProgam;
}

class CalcProgam : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalcProgam(QWidget *parent = nullptr);
    ~CalcProgam();

signals:
    void showMainWindow();

private slots:


    void on_enter_number_cursorPositionChanged(int arg1, int arg2);

    void on_radioButton_bin_clicked(bool checked);

    void on_radioButton_oct_clicked(bool checked);

    void on_radioButton_dec_clicked(bool checked);

    void on_radioButton_hex_clicked(bool checked);

    void on_wP_standart_triggered();

    void bin_system();

    void oct_system();

    void dec_system();

    void hex_system();

    void on_radioButton_bin_clicked();

    void on_radioButton_oct_clicked();

    void on_radioButton_dec_clicked();

    void on_radioButton_hex_clicked();

private:
    Ui::CalcProgam *ui;
private:
    int n0, n, i;
    char binary[128];
    void ClearDisplay();

};

#endif // CALCPROGAM_H
