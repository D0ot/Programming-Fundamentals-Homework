//*********************************************************
//File name	 :      0507.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    float data[10], temp;
    printf("Please enter 10 floats:\n");
    for(int i = 0; i < 10; ++i)
    {
        scanf("%f", data + i);
    }

    for(int i = 0; i < 5; ++i)
    {
        temp = data[i];
        data[i] = data[9-i];
        data[9-i] = temp;
    }

    for(int i = 0; i < 10; ++i)
    {
        printf("%f ", data[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

