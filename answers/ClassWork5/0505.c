//*********************************************************
//File name	 :      0505.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int data[10], temp;
    printf("Please enter 10 numbers:\n");
    for(int i = 0; i < 10; ++i)
    {
        scanf("%d", data+i);
    }

    for(int i = 0; i < 9; ++i)
    {
        for(int j = i + 1; j < 10; ++j)
        {
            if(data[j] < data[i])
            {
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }
       
    }

    for(int i = 0; i < 10; ++i)
    {
        printf("%d ", data[i]);
    }
    printf("\n");


    system("pause");
    return 0;
}

