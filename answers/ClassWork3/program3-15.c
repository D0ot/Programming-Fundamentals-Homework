//*********************************************************
//File name	 : program3-15.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("Please enter n:");
    scanf("%d", &n);

    for(int i = 0; i <= n; ++i)
    {
        for(int j = i; j <= n; ++j)
        {
            putchar(' ');
        }

        for(int j = -i; j <= i; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }

    for(int i = 0; i <= 2*n+2; ++i)
    {
        putchar('*');
    }
    putchar('\n');

    for(int i = n; i >= 0; --i)
    {
        for(int j = i; j <= n; ++j)
        {
            putchar(' ');
        }

        for(int j = -i; j <= i; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }

    system("pause");
    return 0;
}
