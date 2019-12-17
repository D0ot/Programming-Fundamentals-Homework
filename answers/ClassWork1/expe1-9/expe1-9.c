//*********************************************************
//File name	 :      expe1-9.c
//Author  	 :      ¹¢±¦Ô´
//Date   	 :      2019.3.2
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(void)
{
    double x, y;
    printf("Please enter x and y of a point\n");
    scanf("%lf%lf", &x, &y);
    float distance = sqrt(x*x + y*y);
    float angle = acos (x / distance);
    printf("the distance between the point and O is %f\n", distance);
    printf("the angle is %f (rad)\n", angle);
    system("pause");
}
