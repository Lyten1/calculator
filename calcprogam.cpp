#include "calcprogam.h"
#include "ui_calcprogam.h"

CalcProgam::CalcProgam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalcProgam)
{
    ui->setupUi(this);
}

CalcProgam::~CalcProgam()
{
    delete ui;
}

void CalcProgam::ClearDisplay()
{
    QString cur_num = ui->enter_number->text();
    ui->enter_number->clear();
    ui->enter_number->setText(cur_num);
    ui->bin->clear();
    ui->oct->clear();
    ui->dec->clear();
    ui->hex->clear();
}



void CalcProgam::on_enter_number_cursorPositionChanged(int arg1, int arg2)
{
    if(ui->radioButton_bin->isChecked())
    {
        bin_system();
    }

    if(ui->radioButton_oct->isChecked())
    {
        oct_system();
    }

    if(ui->radioButton_dec->isChecked())
    {
        dec_system();
    }

    if(ui->radioButton_hex->isChecked())
    {
        hex_system();
    }
}

void CalcProgam::on_radioButton_bin_clicked(bool checked)
{
    if(checked == true)
    {
        ClearDisplay();
    }
}

void CalcProgam::on_radioButton_oct_clicked(bool checked)
{
    if(checked == true)
    {
        ClearDisplay();
    }
}

void CalcProgam::on_radioButton_dec_clicked(bool checked)
{
    if(checked == true)
    {
        ClearDisplay();
    }
}

void CalcProgam::on_radioButton_hex_clicked(bool checked)
{
    if(checked == true)
    {
        ClearDisplay();
    }
}

void CalcProgam::on_wP_standart_triggered()
{
    this->close();
    emit showMainWindow();
}

void CalcProgam::bin_system(){
    QString num = ui->enter_number->text();
    bool ok;

    int iVal = num.toInt(&ok,2);

    ui->bin->setText(ui->enter_number->text());

    QString oct = num.setNum(iVal, 8);
    ui->oct->setText(oct);

    QString dec = num.setNum(iVal, 10);
    ui->dec->setText(dec);

    QString hex = num.setNum(iVal, 16);
    ui->hex->setText(hex);
}

void CalcProgam::oct_system()
{
    QString num = ui->enter_number->text();
    bool ok;

    int iVal = num.toInt(&ok,8);

    QString binnumber = num.setNum(iVal, 2);
    ui->bin->setText(binnumber);

    ui->oct->setText(ui->enter_number->text());

    QString dec = num.setNum(iVal, 10);
    ui->dec->setText(dec);

    QString hex = num.setNum(iVal, 16);
    ui->hex->setText(hex);
}

void CalcProgam::dec_system()
{
    QString num = ui->enter_number->text();
    bool ok;

    int iVal = num.toInt(&ok,10);

    QString binnumber = num.setNum(iVal, 2);
    ui->bin->setText(binnumber);

    QString oct = num.setNum(iVal, 8);
    ui->oct->setText(oct);

    ui->dec->setText(ui->enter_number->text());

    QString hex = num.setNum(iVal, 16);
    ui->hex->setText(hex);
}

void CalcProgam::hex_system()
{
    QString num = ui->enter_number->text();
    bool ok;

    int iVal = num.toInt(&ok,16);

    QString binnumber = num.setNum(iVal, 2);
    ui->bin->setText(binnumber);

    QString oct = num.setNum(iVal, 8);
    ui->oct->setText(oct);

    QString dec = num.setNum(iVal, 10);
    ui->dec->setText(dec);

    ui->hex->setText(ui->enter_number->text());
}

void CalcProgam::on_radioButton_bin_clicked()
{
    bin_system();
}

void CalcProgam::on_radioButton_oct_clicked()
{
    oct_system();
}

void CalcProgam::on_radioButton_dec_clicked()
{
    dec_system();
}

void CalcProgam::on_radioButton_hex_clicked()
{
    hex_system();
}
