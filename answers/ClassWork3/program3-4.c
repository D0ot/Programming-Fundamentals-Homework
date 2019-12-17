//*********************************************************
//File name	 : program3-4.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Please enter three number : ");
    int a, b, c, temp;
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if(b > c)
    {
        temp = b;
        b = c;
        c = temp;

    }

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }


    printf("Ordered : %d %d %d\n", a, b, c);

    system("pause");
    return 0;
}
