//*********************************************************
//File name	 :      0515.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int mat[5][5], sum1 = 0, sum2 = 0, sum3 = 0, flag = 1;
    printf("Please enter a Matrix(5x5) : \n");

    for(int i = 0; i < 5; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < 5; ++i)
    {
        sum1 += mat[i][i];
        sum2 += mat[i][4-i];
    }

    if(sum1 == sum2)
    {
        for(int i = 0; i < 5; ++i)
        {
            sum2 = 0;
            sum3 = 0;
            for(int j = 0; j < 5; ++j)
            {
                sum2 += mat[i][j];
                sum3 += mat[j][i];
                
            }
            if(sum2 != sum1 || sum3 != sum1)
            {
                flag = 0;
                goto lable;
            }
        }
    }
    else
    {
        flag = 0;
    }
    
    lable:
    if(flag)
    {
        printf("This is a magic Matrix.\n");
    }
    else
    {
        printf("This is not a magic Matrix.\n");
    }

    system("pause");
    return 0;
}


