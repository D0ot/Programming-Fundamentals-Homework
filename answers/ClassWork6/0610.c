//*********************************************************
//File name	 :      0610.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat1[4][4], *p1, *p2, (*p3)[4], temp;

    printf("Please enter a Matrix as mat1[4x4] : \n");
    for(int i = 0; i < 4; ++i)
    {
        p1 = mat1[i];
        while(p1 != mat1[i+1])
        {
            scanf("%d", p1);
            ++p1;
        }

    }

    for(int i = 0; i < 4; ++i)
    {
        p1 = mat1[i] + i - 1;
        p3 = mat1 + i;
        while((++p1) != mat1[i+1])
        {
            temp = *p1;
            *p1 = p3[0][i];
            p3[0][i] = temp;
            ++p3;
        }

    }

    for(int i = 0; i < 4; ++i)
    {
        p1 = mat1[i];
        while(p1 != mat1[i+1])
        {
             
            printf("%d ", *p1);
            ++p1;
        }
        printf("\n");
    }


    system("pause");
    return 0;
}