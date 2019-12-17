//*********************************************************
//File name	 : program2-3.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <math.h>


int main(void)
{
    double r, h;
    printf("Please enter the bottom radius and hight of a Tapered\n");
    scanf("%lf%lf", &r, &h);
    printf("The volume of the tapered is %lf\n", M_PI * r * r * h / 3);

    system("pause");

    return 0;

}
