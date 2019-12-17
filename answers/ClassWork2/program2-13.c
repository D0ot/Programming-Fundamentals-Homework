//*********************************************************
//File name	 : program2-13.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.13
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    int temp;
    printf("Please enter a integer : ");
    scanf("%d", &temp);
    if(temp % 2 == 0)
    {
        printf("It is a even number.\n");
    }
    else
    {
        printf("It is a odd number.\n");
    }
    system("pause");
    return 0;
}
