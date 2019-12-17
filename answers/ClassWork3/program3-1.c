//*********************************************************
//File name	 : program3-1.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double n, fax;
    printf("Please enter you income per year : ");
    scanf("%lf", &n);
    if(n <= 36000.0)
    {
        fax = n * 0.03;
    }
    else if(n <= 144000)
    {
        fax = n * 0.1 - 2520;
    }
    else if(n <= 300000)
    {
        fax = n * 0.2 - 16920;
    }
    else if(n <= 420000)
    {
        fax = n * 0.25 - 31920;
    }
    else if(n <= 660000)
    {
        fax = n * 0.3 - 52920;
    }
    else if(n <= 960000)
    {
        fax = n * 0.35 - 85920;
    }
    else
    {
        fax = n * 0.45 - 181920;
    }

    printf("the fax you should pay is : %lf\n", fax);
    system("pause");
    return 0;
}
