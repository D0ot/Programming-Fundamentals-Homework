//*********************************************************
//File name	 : 0404.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.24
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mat[4][5];
    float sums[4] = {0};
    printf("Enter elements of a matrix[4][5] (row comes first) : \n");
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 5; ++j)
        {
            scanf("%f", &mat[i][j]);
            sums[i] += mat[i][j];
        }

    }

    
    for(int i = 0; i < 4; ++i)
    {
        printf("Sum of %dth row : %5.2f\n", i + 1,sums[i]);
    }

    system("pause");
    return 0;
}