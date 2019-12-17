//*********************************************************
//File name	 :      0506.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    float data[10], temp;
    int pos;
    printf("Please enter 10 floats:\n");
    for(int i = 0; i < 10; ++i)
    {
        scanf("%f", data+i);
    }

    for(int i = 0; i < 9; ++i)
    {
        pos = i;
        for(int j = i + 1; j < 10; ++j)
        {
            if(data[j] < data[i])
            {
                pos = j;
            }
        }

        if(pos != i)
        {
            temp = data[pos];
            data[pos] = data[i];
            data[i] = temp;
        }
        

       
    }

    for(int i = 0; i < 10; ++i)
    {
        printf("%f ", data[i]);
    }
    printf("\n");


    system("pause");
    return 0;
}
