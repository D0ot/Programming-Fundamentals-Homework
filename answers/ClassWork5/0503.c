//*********************************************************
//File name	 :      0503.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int counts[2] = {0}, temp;
    printf("Please enter 10 integers:\n");
    for(int i = 0; i < 10; ++i)
    {
        scanf("%d", &temp);
        counts[temp%2]++;
        
    }
    printf("Even:%d Odd:%d\n", counts[0], counts[1]);
    system("pause");
    return 0;
}

