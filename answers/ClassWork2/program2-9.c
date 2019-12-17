//*********************************************************
//File name	 : program2-9.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    double p, ir, t, f;
    printf("Please Enter Principal, interest rate, time(year), fax rate : ");
    scanf("%lf%lf%lf%lf", &p, &ir, &t, &f);
    printf("Sum is %lf\n", (1 + (ir*t * (1 - f))) * p);
    system("pause");
    return 0;
}
