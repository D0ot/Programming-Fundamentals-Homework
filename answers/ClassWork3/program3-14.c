//*********************************************************
//File name	 : program3-14.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sumOfFactor = 0;
    printf("The number found under 1000:\n");
    for(int i = 1; i <= 1000; ++i)
    {
        sumOfFactor = 0;
        for(int j = 1; j*2 <= i; ++j)
        {
            if(i % j == 0)
            {
                sumOfFactor += j;
            }
        }
        if(sumOfFactor == i)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    return 0;
}
