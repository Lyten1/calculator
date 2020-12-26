#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_percent,SIGNAL(clicked()),this,SLOT(operations()));
    connect(ui->pushButton_plus_minus,SIGNAL(clicked()),this,SLOT(operations()));

}

void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();
    double num;
    QString label;
    num = (ui->result_show->text()+ button->text()).toDouble();
    label = QString::number(num, 'g',15);
    ui->result_show->setText(label );
}
void MainWindow::operations(){
    QPushButton *button = (QPushButton *)sender();
    double num;
    QString label;

    if(button->text() == "+/-"){
    num = ui->result_show->text().toDouble();
    num *= -1;
    label = QString::number(num, 'g',15);
    ui->result_show->setText(label );
    }
    else if(button->text() == "%"){
    num = ui->result_show->text().toDouble();
    num *= 0.01;
    label = QString::number(num, 'g',15);
    ui->result_show->setText(label);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->result_show->text().contains('.')))
    ui->result_show->setText(ui->result_show->text()+ ".");
}

void MainWindow::on_pushButton_Erase_clicked()
{

}
