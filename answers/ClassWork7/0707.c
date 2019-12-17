//*********************************************************
//File name	 :      0707.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

void transposeMat(int * mat, const int m, const int n)
{
    int temp;
    for(int i = 0; i < m; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            temp = mat[i*m+j];
            mat[i*m+j] = mat[j*m+i];
            mat[j*m+i] = temp;
        }
    }
}


int main(void)
{
    int mat[4][4], *p;
    p = (int*)mat;
    printf("Please enter a matrix(4x4) : \n");
    for(int i = 0; i < 16; ++i)
    {
        scanf("%d", p+i);
    }
    transposeMat(p, 4, 4);
    printf("Transposing result : \n");
    for(int i = 0; i < 16; ++i)
    {
        printf("%d ", *(p+i));
        if(i % 4 == 3)
        {
            putchar('\n');
        }
    }
    putchar('\n');
    system("pause");
    return 0;
}