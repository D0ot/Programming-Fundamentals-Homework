//*********************************************************
//File name	 : program3-2.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Enter a number (1-12) : ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            printf("January\n");
            break;

        case 2:
            printf("February\n");
            break;

        case 3:
            printf("March\n");
            break;

        case 4:
            printf("April\n");
            break;

        case 5:
            printf("May\n");
            break;

        case 6:
            printf("June\n");
            break;

        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;

        case 10:
            printf("October\n");
            break;

        case 11:
            printf("November\n");
            break;

        case 12:
            printf("December\n");
            break;
    }

    system("pause");
    return 0;
}
