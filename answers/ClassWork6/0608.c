//*********************************************************
//File name	 :      0608.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mat1[3][3], mat2[3][3];
    int *p1, *p2;

    printf("Please enter a Matrix as mat1[3x3] : \n");
    for(int i = 0; i < 3; ++i)
    {
        p1 = mat1[i];
        while(p1 != mat1[i+1])
        {
            scanf("%d", p1);
            ++p1;
        }

    }

    printf("Enter another Matrix as mat2[3x3] : \n");
    for(int i = 0; i < 3; ++i)
    {
        p2 = mat2[i];
        while(p2 != mat2[i+1])
        {
            scanf("%d", p2);
            ++p2;
        }
    }

    printf("Add mat1 to mat2...\n");
    
    for(int i = 0; i < 3; ++i)
    {
        p1 = mat1[i];
        p2 = mat2[i];
        while(p1 != mat1[i+1])
        {
            *p2 = *p1 + *p2;
            ++p1;
            ++p2;
        }
    }
    
    printf("now, mat2 : \n");
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d ", mat2[i][j]);
        }
        putchar('\n');
    }
    

    system("pause");
    return 0;
}