//*********************************************************
//File name	 : program3-8.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a, b, c, d, average;
    printf("Enter you four grades : ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    average = (a + b + c + d) / 4.0f;
    if(a >= 5.0f && b >= 5.0f && c >= 5.0f && d >= 5.0f && average >= 6.0)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    system("pause");
    return 0;
}
