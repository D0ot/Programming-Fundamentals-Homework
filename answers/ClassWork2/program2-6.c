//*********************************************************
//File name	 : program2-6.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    double cg1, cg2, cg3, cg4;
    printf("Please enter 4 class grades : ");
    scanf("%lf%lf%lf%lf", &cg1, &cg2, &cg3, &cg4);
    printf("The mean of data entered is %lf", (cg1+cg2+cg3+cg4)/4);
    system("pause");
    return 0;
}
