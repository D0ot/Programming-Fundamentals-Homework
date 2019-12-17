//*********************************************************
//File name	 :      0602.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int data[10], pos;
    printf("Please enter 10 numbers : \n");

    int *p = data - 1;
    int max;
    while(++p != data + 10)
    {
        scanf("%d", p);
    }

    max = data[0];
    p = data;
    while(++p != data + 10)
    {
        if(*p >= max)
        {
            max = *p;
            pos = p - data;
        }
    }

    printf("The maximum number is %d located at index : %d\n", max, pos);
    system("pause");
    return 0;
}