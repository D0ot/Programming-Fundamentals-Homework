//*********************************************************
//File name	 : program2-10.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a, b, temp;
    printf("Please enter 2 numbers a and b:");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("Swap 2 numbers. result is a = %d, b = %d\n", a, b);
    system("pause");
    return 0;
}
