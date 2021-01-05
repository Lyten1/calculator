#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    wnd_cacl = new CalcProgam;
     connect(wnd_cacl, &CalcProgam::showMainWindow, this, &MainWindow::show);

    wnd_cacl = new CalcProgam;
    connect(wnd_cacl, &CalcProgam::showMainWindow, this, &MainWindow::show);


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
    connect(ui->pushButton_plus,SIGNAL(clicked()),this, SLOT(algebraOperations()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this, SLOT(algebraOperations()));
    connect(ui->pushButton_divide,SIGNAL(clicked()),this, SLOT(algebraOperations()));
    connect(ui->pushButton_multiply,SIGNAL(clicked()),this, SLOT(algebraOperations()));
    connect(ui->pushButton_res,SIGNAL(clicked()),this, SLOT(result()));
}

void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();
    double num;
    QString label;

    if(ui->result_show->text()== "+" || ui->result_show->text()== "-" || ui->result_show->text()== "/" || ui->result_show->text()=="*")
        num = (button->text()).toDouble();

    else num = (ui->result_show->text()+ button->text()).toDouble();
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

void MainWindow::algebraOperations(){
    QPushButton *button = (QPushButton *)sender();

    m_firstNum = ui->result_show->text().toDouble();
    m_operator = button->text();

    ui->result_show->setText(button->text());
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
    ui->result_show->setText("0");
    m_firstNum = 0;
    m_secondNum = 0;
    m_operator = " ";
}


void MainWindow::result()
{
    base_calc = new CalcBasic;


    m_secondNum = (ui->result_show->text()).toDouble();

     if(m_operator == "/"|| m_operator == "*" || m_operator == "+" || m_operator == "-"){
        base_calc->SetData(m_operator,m_firstNum,m_secondNum);
        base_calc->Calculation();
        QString res = base_calc->GetResult();
        ui->result_show->setText(res);
       }
}



void MainWindow::on_wS_programer_triggered()
{
    wnd_cacl->show(); this->hide();
}
