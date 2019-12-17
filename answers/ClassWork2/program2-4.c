//*********************************************************
//File name	 : program2-4.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, r;
    printf("Please enter the angle and radius of a sector\n");
    scanf("%lf%lf", &a, &r);
    printf("The area of the sector is %lf", a / 360.0 * M_PI * r * r);
    system("pause");
    return 0;

}
