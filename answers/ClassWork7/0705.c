//*********************************************************
//File name	 :      0705.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    if(n % 2 == 0)
    {
        return 0;
    }

    for(int i = 3; i * i <= n; i = i + 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    printf("primer number between 100 to 200\n");
    for(int i = 100; i <= 200; ++i)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
    putchar('\n');
    system("pause");
    return 0;
}