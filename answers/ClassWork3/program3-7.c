//*********************************************************
//File name	 : program3-7.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int year, month, feb = 0, days = 0;
    printf("Enter a particular year and month:");
    scanf("%d%d", &year, &month);
    if((year%4 == 0 && year%100 !=0) || year % 400 == 0)
    {
        feb = 29;
    }
    else
    {
        feb = 28;
    }

    if(month == 1 || month == 3 || month == 5 || month == 7|| month == 8|| month == 10 ||month==12)
    {
        days = 31;
    }
    else
    {
        if(month == 2)
        {
            days = feb;
        }
        else
        {
            days = 30;
        }
    }
    printf("Days:%d\n", days);
    system("pause");
    return 0;

}
