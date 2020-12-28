#ifndef CALCPROG_H
#define CALCPROG_H

#include <QDialog>
#include <bitset>
#include "QDebug"

namespace Ui {
class CalcProg;
}

class CalcProg : public QDialog
{
    Q_OBJECT

public:
    explicit CalcProg(QWidget *parent = nullptr);
    ~CalcProg();

signals:
    void showMainWindow();

private slots:
    void on_enter_number_cursorPositionChanged(int arg1, int arg2);

    void on_checkBox_dec_clicked(bool checked);

    void on_checkBox_bin_clicked(bool checked);

    void on_checkBox_oct_clicked(bool checked);

    void on_checkBox_hex_clicked(bool checked);

    void on_another_wnd_clicked();

private:
    Ui::CalcProg *ui;

private:
    int n0, n, i;
    char binary[128];
};

#endif // CALCPROG_H

