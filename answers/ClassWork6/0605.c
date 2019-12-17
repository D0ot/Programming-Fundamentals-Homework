//*********************************************************
//File name	 :      0605.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char names[10][30], *strs[10], *tempPointer;
    int maxPos;

    printf("Please enter 10 names(every name followed by enter) :\n");


    for(int i = 0; i < 10; ++i)
    {
        gets(names[i]);
        strs[i] = names[i];
    }

    for(int i = 0; i < 9; ++i)
    {
        maxPos = i;
        for(int j = i + 1; j < 10; ++j)
        {
            if(strcmp(strs[maxPos], strs[j]) > 0)
            {
                maxPos = j;
            }

        }
        if(maxPos != i)
            {
                tempPointer = strs[maxPos];
                strs[maxPos] = strs[i];
                strs[i] = tempPointer;
            }
    }



    printf("The names sorted : \n");

    for(int i = 0; i < 10; ++i)
    {
        printf("%s\n", strs[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}