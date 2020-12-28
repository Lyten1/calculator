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
    if(ui->checkBox_bin->isChecked())
    {
        QString num = ui->enter_number->text();
        bool ok;

        QString _num;
        _num = num;
        int iVal = num.toInt(&ok,2);

        ui->bin->setText(ui->enter_number->text());

        QString oct = num.setNum(iVal, 8);
        ui->oct->setText(oct);

        QString dec = num.setNum(iVal, 10);
        ui->dec->setText(dec);

        QString hex = num.setNum(iVal, 16);
        ui->hex->setText(hex);
    }

    if(ui->checkBox_oct->isChecked())
    {
        QString num = ui->enter_number->text();
        bool ok;

        QString _num;
        _num = num;
        int iVal = num.toInt(&ok,8);

        QString binnumber = num.setNum(iVal, 2);
        ui->bin->setText(binnumber);

        ui->oct->setText(ui->enter_number->text());

        QString dec = num.setNum(iVal, 10);
        ui->dec->setText(dec);

        QString hex = num.setNum(iVal, 16);
        ui->hex->setText(hex);
    }

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

        ui->dec->setText(ui->enter_number->text());

        QString hex = num.setNum(iVal, 16);
        ui->hex->setText(hex);
    }

    if(ui->checkBox_hex->isChecked())
        {
            QString num = ui->enter_number->text();
            bool ok;

            QString _num;
            _num = num;
            int iVal = num.toInt(&ok,16);

            QString binnumber = num.setNum(iVal, 2);
            ui->bin->setText(binnumber);

            QString oct = num.setNum(iVal, 8);
            ui->oct->setText(oct);

            QString dec = num.setNum(iVal, 10);
            ui->dec->setText(dec);

            ui->hex->setText(ui->enter_number->text());
        }
}


//-----------------------checked---------------------
void CalcProg::on_checkBox_bin_clicked(bool checked)
{
    if(checked == true)
    {
        ui->checkBox_dec->setChecked(false);
        ui->checkBox_oct->setChecked(false);
        ui->checkBox_hex->setChecked(false);

        ui->enter_number->clear();
        ui->bin->clear();
        ui->oct->clear();
        ui->dec->clear();
        ui->hex->clear();
    }
}

void CalcProg::on_checkBox_oct_clicked(bool checked)
{
    if(checked == true)
    {
        ui->checkBox_bin->setChecked(false);
        ui->checkBox_dec->setChecked(false);
        ui->checkBox_hex->setChecked(false);

        ui->enter_number->clear();
        ui->bin->clear();
        ui->oct->clear();
        ui->dec->clear();
        ui->hex->clear();
    }
}

void CalcProg::on_checkBox_dec_clicked(bool checked)
{
    if(checked == true)
    {
        ui->checkBox_bin->setChecked(false);
        ui->checkBox_oct->setChecked(false);
        ui->checkBox_hex->setChecked(false);

        ui->enter_number->clear();
        ui->bin->clear();
        ui->oct->clear();
        ui->dec->clear();
        ui->hex->clear();
    }
}

void CalcProg::on_checkBox_hex_clicked(bool checked)
{
    if(checked == true)
    {
        ui->checkBox_bin->setChecked(false);
        ui->checkBox_oct->setChecked(false);
        ui->checkBox_dec->setChecked(false);

        ui->enter_number->clear();
        ui->bin->clear();
        ui->oct->clear();
        ui->dec->clear();
        ui->hex->clear();
    }
//-----------------------/checked---------------------
}

void CalcProg::on_another_wnd_clicked()
{
    if(ui->calculation_type->currentText() == "Базовий")
    {
        this->close();
        emit showMainWindow();
    }
}
