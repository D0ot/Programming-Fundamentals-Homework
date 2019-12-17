//*********************************************************
//File name	 : 0403.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.24
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[10], mean = 0;
    printf("Enter 10 grades:\n");
    for(int i = 0; i < 10; ++i)
    {
        scanf("%f", grades + i);
        mean += grades[i];
    }

    mean /= 10.0f;
    printf("index of grade higer than mean (start from 1): ");
    for(int i = 0; i < 10; ++i)
    {
        if(grades[i] > mean)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}