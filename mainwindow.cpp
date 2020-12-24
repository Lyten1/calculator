#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* connect(ui->pushButton_0,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_1,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_2,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_3,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_4,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_5,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_6,SIGNAl(clicked()),this,SLOT(digits_numbers());
    connect(ui->pushButton_7,SIGNAl(clicked()),this,SLOT(digits_numbers());
     */
}

void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();
}
MainWindow::~MainWindow()
{
    delete ui;
}


QString MainWindow::on_pushButton_clicked()
{
    return "1";
}

void MainWindow::on_pushButton_0_clicked()
{

}
