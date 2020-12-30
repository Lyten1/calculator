#include "calcbasic.h"

CalcBasic::CalcBasic()
{
    this->Action = "null";
    this->Result = "null";
    this->FirstNumber = 0;
    this->SecondNumber = 0;
}

void CalcBasic::SetData(QString action, double firstnumber, double secondnumber)
{
    if(this->Action == "null")
    {
        this->Action = action;
    }
    if(this->FirstNumber == 0)
    {
        this->FirstNumber =firstnumber;
    }
    if(this->SecondNumber == 0)
    {
        this->SecondNumber = secondnumber;
    }
}

QString CalcBasic::GetResult(){
    return Result;
}

void CalcBasic::ClearData()
{
    this->Action = "null";
    this->Result = "null";
    this->FirstNumber = 0;
    this->SecondNumber = 0;
}

QString CalcBasic::Calculation()
{
    int size = this->Action.size();
    if(size != 1)
    {
        return "Error";
    }
    else
    {
    if(this->Action == "+")
    {

        this->Result = QString::number(this->FirstNumber + this->SecondNumber);
    }
    else
    {
        if(this->Action == "-")
        {
            this->Result = QString::number(this->FirstNumber - this->SecondNumber);
        }
        else
        {
            if(this->Action == "*")
            {
                this->Result = QString::number(this->FirstNumber * this->SecondNumber);
            }
            else
            {
                if(this->Action == "/")
                {
                    this->Result = QString::number(this->FirstNumber / this->SecondNumber);
                }
                else
                {
                    this->Result = "Eror";
                }
            }
        }
    }
    }
    return this->Action;
}
