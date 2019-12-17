//*********************************************************
//File name	 : program3-5.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    double a, b, c;
    char flag = 0, flag1 = 0;
    printf("Enter 3 length of edges of a triangle : ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a * b * c <= 10e-6 || a + b <= c || a + c <= b || b + c <= a)
    {
        flag = 1;
    }
    else
    {
        if(fabs(a*a-b*b-c*c) < 10e-6 || fabs(b*b-a*a-c*c) < 10e-6 || fabs(c*c-a*a-b*b) < 10e-6)
        {

            flag1 = 1;
        }

        if(fabs(a - b) < 10e-6 && fabs(b -c) < 10e-6)
        {
            flag = 2;
        }
        else
        {
            if(fabs(a - b) < 10e-6 || fabs(a - c) < 10e-6 || fabs(b - c) < 10e-6)
            {
                flag = 3;
            }

        }


    }


    switch(flag)
    {
    case 1:
        printf("Invalid data.");
        break;
    case 2:
        printf("equilateral triangle");
        break;
    case 3:
        printf("isosceles triangle");
        break;
    default:
        printf("Normal triangle");
        break;
    }

    if(flag1)
    {
        printf(" and right triangle\n");
    }
    else
    {
        printf("\n");
    }




    system("pause");
    return 0;

}
