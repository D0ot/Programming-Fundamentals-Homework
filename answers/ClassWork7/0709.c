//*********************************************************
//File name	 :      0709.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include "0709.h"

double sinX(double x)
{
    while((x > 0 ? x : -x) > 2*PI)
    {
        if(x > 0)
        {
            x -= 2*PI;
        }else
        {
            x += 2*PI;
        }
    }

    double i = 1, result = x, item = x;
    while((item > 0 ? item : -item) > 10E-6)
    {
        item *= -x*x;
        item /= (i*2)*(i*2+1);
        result += item;
        ++i;
    }

    return result;
}

double cosX(double x)
{
    return sinX(x + PI/2.0);   
}



int main(void)
{
    double (*p1)(double), (*p2)(double);
    p1 = sinX;
    p2 = cosX;
    printf("sin(30d) + cos(60d) = %lf\n", p1(30/180*PI) + p2(60/180*PI));
    system("pause");
    return 0;
}