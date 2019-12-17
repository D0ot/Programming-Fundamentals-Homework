//*********************************************************
//File name	 :      0802.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.5.5
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int m, n, index;
    srand(time(NULL));
    printf("Please enter m and n as dim of Matrix: ");
    scanf("%d%d", &m, &n);
    float *mat = malloc(sizeof(float) * m * n);
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            mat[i*m+j] = rand();
        }
    }

    index = 0;

    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(mat[index] > mat[i*m+j])
            {
                index = i*m+j;
            }
        }
    }

    printf("The min element is %f at %d, %d.\n", mat[index], index/m, index%m);
    free(mat);
    system("pause");
    return 0;
}