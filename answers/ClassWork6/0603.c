//*********************************************************
//File name	 :      0603.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int data[10], *p1, *p2, *maxPos, temp;
    printf("Please enter 10 numbers :\n");
    p1 = data - 1;

    while(++p1 != data + 10)
    {
        scanf("%d", p1);
    }

    p1 = data;
    while(p1 != data + 9)
    {
        p2 = p1 + 1;
        maxPos = p1;
        while(p2 != data + 10)
        {
            if(*p2 > *maxPos)
            {
                maxPos = p2;
            }
            ++p2;
            
        }

        temp = *maxPos;
        *maxPos = *p1;
        *p1 = temp;

        ++p1;
    }

    printf("Data sorted:\n");
    p1 = data - 1;
    while(++p1 != data + 10)
    {
        printf("%d ", *p1);
    }
    printf("\n");
    system("pause");
    return 0;
}