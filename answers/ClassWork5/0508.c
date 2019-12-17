//*********************************************************
//File name	 :      0508.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int data[10], number;
    printf("Enter 10 numbers to store:\n");


    for(int i = 0; i < 10; ++i)
    {
        scanf("%d", data + i);
    }

    printf("Enter a number to search:");
    scanf("%d", &number);
    int index;
    for(index = 0; index < 10; ++index)
    {
        if(data[index] == number)
        {
            break;
        }
    }
    
    if(index == 10)
    {
        printf("Can't find %d in stored data.\n", number);
    }
    else
    {
        printf("Number stored in index:%d.\n", index);
    }
    


    system("pause");
    return 0;
}

