//*********************************************************
//File name	 :      0615.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double array[3][4], s[3][2], sum = 0, sq = 0, *p1, avg;
    printf("Please enter a 2-Dim array[3x4] : \n");

    for(int i = 0; i < 3; ++i)
    {
        p1 = array[i];
        while(p1 != array[i+1])
        {
            scanf("%lf", p1);
            ++p1;
        }

    }

    double (*p2)[4] = array, (*p3)[2] = s;
    while(p2 != array + 3)
    {   
        sum = 0;
        sq = 0;

        p1 = p2[0] - 1;
        while(++p1 != p2[1])
        {
            sum += *p1;
            
        }
        sum = sum / 4;

        p1 = p2[0] - 1;
        while(++p1 != p2[1])
        {
            sq +=(sum - *p1) * (sum - *p1);
        }
        (*p3)[0] = sum;
        (*p3)[1] = sq;
        ++p2;
        ++p3;
    }

    printf("S:\n");
    for(int i = 0; i < 3; ++i)
    {
        p1 = s[i];
        while(p1 != s[i+1])
        {
            printf("%lf ", *p1);
            ++p1;
        }
        putchar('\n');

    }

    system("pause");
    return 0;
}