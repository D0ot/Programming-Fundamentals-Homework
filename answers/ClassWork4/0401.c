//*********************************************************
//File name	 : 0401.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.24
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p;
    char bit[10], pos = 0, sign = 0;
    printf("Please enter a number : ");
    scanf("%d", &n);
    if(n < 0)
    {
        n = -n;
        sign = 1;
    }
    

    for(int i = 0; i < 10; ++i)
    {
        p = 1;
        for(int j = 0; j < i; ++j)
        {
            p *= 10;
        }
        bit[i] = n / p % 10;


        if(bit[i] != 0)
        {
            pos = i;
        }
    }

    if(sign)
    {
        putchar('-');
    }

    for(int i = 0; i <= pos; ++i)
    {
        printf("%d", bit[i]);
    }


    printf("\n");
    system("pause");
    return 0;
}