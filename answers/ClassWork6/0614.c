//*********************************************************
//File name	 :      0614.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double array[3][3], sum = 0, *p1;
    printf("Please enter a 2-Dim array[3x3] : \n");

    for(int i = 0; i < 3; ++i)
    {
        p1 = array[i];
        while(p1 != array[i+1])
        {
            scanf("%lf", p1);
            ++p1;
        }

    }

    double (*p)[3] = array - 1;
    
    while(++p != array + 3)
    {
        for(int i = 0; i < 3; ++i)
        {
            sum += p[0][i];
        }
    }
    printf("Average : %lf\n", sum / 9.0);
    system("pause");
    return 0;
}