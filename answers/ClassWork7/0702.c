//*********************************************************
//File name	 :      0702.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }else
    {
        return gcd(b, a % b);
    }
    
}

int main(void)
{
    int a, b;
    printf("Please enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) =  %d\n", a, b,gcd(a, b));
    system("pause");
    return 0;
}