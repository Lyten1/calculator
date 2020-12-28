#include "calcprog.h"
#include "ui_calcprog.h"

#include <iostream>
using namespace std;

CalcProg::CalcProg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalcProg)
{
    ui->setupUi(this);
}

CalcProg::~CalcProg()
{
    delete ui;
}

void CalcProg::on_enter_number_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->checkBox_dec->isChecked())
    {
        QString num = ui->enter_number->text();
        bool ok;

        QString _num;
        _num = num;
        int iVal = num.toInt(&ok,10);

        QString binnumber = num.setNum(iVal, 2);
        ui->bin->setText(binnumber);

        QString oct = num.setNum(iVal, 8);
        ui->oct->setText(oct);

        ui->dec->setText(_num);

        QString hex = num.setNum(iVal, 16);
        ui->hex->setText(hex);
    }

}

void CalcProg::on_checkBox_dec_clicked(bool checked)
{
    if(checked == true)
    {
        ui->checkBox_bin->setChecked(false);
        ui->checkBox_oct->setChecked(false);
        ui->checkBox_hex->setChecked(false);
    }
}
