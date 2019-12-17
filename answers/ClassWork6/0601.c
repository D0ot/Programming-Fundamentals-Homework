//*********************************************************
//File name	 :      0601.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, temp;
    int *pa = &a, *pb = &b;
    printf("Please enter a and b : ");
    scanf("%d%d", pa, pb);
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("Swap a and b : a = %d, b = %d\n", *pa, *pb);
    system("pause");
    return 0;
}