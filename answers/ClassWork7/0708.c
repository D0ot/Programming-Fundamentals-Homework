//*********************************************************
//File name	 :      0708.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int IsSymmetric(int * mat, const int m, const int n)
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            if(mat[i*m+j] != mat[j*m+i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main(void)
{
    int mat[4][4], *p;
    p = mat[0];
    printf("Please enter a matrix(4x4) : \n");
    for(int i = 0; i < sizeof(mat)/sizeof(mat[0][0]); ++i)
    {
        scanf("%d", p + i);
    }
    if(IsSymmetric(p, 4, 4))
    {
        printf("The matrix is symmetric.\n");
    } 
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    
    system("pause");
    return 0;
}