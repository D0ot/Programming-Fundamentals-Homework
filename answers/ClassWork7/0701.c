//*********************************************************
//File name	 :      0701.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if(n < 0)
    {
        return -1;
    }

    if(n == 0)
    {
        return 1;
    }

    if(n == 1)
    {
        return 1;
    }

    return n * factorial(n-1);

}


int main(void)
{
    int n;
    printf("Please enter a number : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    system("pause");
    return 0;
}