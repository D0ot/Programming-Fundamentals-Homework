//*********************************************************
//File name	 : program2-11.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int number, hdigit, tdigit, sdigit;
    printf("Enter a number with 4 digits : ");
    scanf("%d", &number);
    hdigit = number % 1000;
    tdigit = hdigit % 100;
    sdigit = tdigit % 10;
    printf("Every digit is %d, %d, %d, %d\n", number / 1000, hdigit / 100, tdigit / 10, sdigit);
    system("pause");
    return 0;
}
