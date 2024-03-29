#ifndef CALCBASIC_H
#define CALCBASIC_H

#include <QMainWindow>
using namespace std;
#include <vector>
class CalcBasic
{
private:
    QString Result;
    QString Action;
    double FirstNumber;
    double SecondNumber;

public:
    CalcBasic();
    void ClearData();
    void SetData(QString action = "null", double firstnumber = 0, double secondnumber = 0);
    QString GetResult();
    QString Calculation();
};

#endif // CALCBASIC_H
