//*********************************************************
//File name	 : program2-12.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.12
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double temp;
    printf("Please enter a real number : ");
    scanf("%lf", &temp);
    if(temp > 0) {
        printf("It is a positive number.\n");
    }
    else
    {
        if(temp < 0)
            printf("It is a negative number.\n");
        else
            printf("It is zero.");
    }
    system("pause");
    return 0;
}
