//*********************************************************
//File name	 : program3-6.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int price, time, count;
    double rate = 0;
    printf("Please enter ticket price, time, and how many:");
    scanf("%d%d%d", &price, &time, &count);
    if((1 >= time && time <=3) || (6 >= time && time <=8) || time == 12 || time == 11)
    {
        if(count >= 20)
        {
            rate = 0.4;
        }
        else
        {
            rate = 0.2;
        }
    }
    else
    {
        if(count >= 20)
        {
            rate = 0.2;
        }
        else
        {
            rate = 0.1;
        }

    }
    printf("Total:%lf\n", price*count*(1.0-rate));
    system("pause");
    return 0;
}
