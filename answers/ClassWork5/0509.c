//*********************************************************
//File name	 :      0509.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int data[10], number, left, right, pos;
    printf("Enter 10 numbers sorted to store:\n");

    for(int i = 0; i < 10; ++i)
    {
        scanf("%d", data + i);
    }

    printf("Enter a number to search:");
    scanf("%d", &number);

    left = 0;
    right = 9;
    pos = -1;

    while(left != right)
    {
        if(data[(left+right)/2] == number)
        {
            pos = (left + right) / 2;
            break;
        }
        else
        {
            if(data[(left+right)/2] > number)
            {
                right = (left + right) / 2 -1;
            }
            else
            {
                left = (left + right) / 2 + 1;
            }
            
        }
        
    }

    if(pos == -1)
    {
        printf("Can't find %d in stored data.Please check it.\n", number);
    }
    else
    {
        printf("The pos is %d\n", pos);
    }
    system("pause");
    return 0;
}

