//*********************************************************
//File name	 : program2-15.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int year;
    printf("Please enter a particular year : ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0)
        printf("It is a leap year\n");
    else
        printf("It is not a leap year\n");

    system("pause");
    return 0;
}
