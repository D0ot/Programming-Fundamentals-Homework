//*********************************************************
//File name	 : program3-9.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int sum = 0;
    int i;
    for(i = 3; i < 10000; ++i)
    {
        if(i % 3 == 0)
        {
            sum += i;
        }
    }

    int sum2 = 0;
    i = 3;
    while(i < 10000)
    {
        if(i % 3 == 0)
        {
            sum2 += i;
        }
        ++i;
    }

    int sum3 = 0;
    i = 3;
    do
    {
        if(i % 3 == 0)
        {
            sum3 += i;
        }
        ++i;

    }while(i < 10000);

    printf("Results: %d %d %d\n", sum, sum2, sum3);
    system("pause");
    return 0;
}
