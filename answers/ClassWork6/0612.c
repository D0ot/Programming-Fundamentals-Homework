//*********************************************************
//File name	 :      0612.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80];
    printf("Please enter a string(within 80 letter) : \n");
    gets(str);
    char *left = str, *right = str + strlen(str) - 1;
    while(left < right)
    {
        if(*left != *right)
        {
            break;
        }
        ++left;
        --right;
    }
    if(left < right)
    {
        printf("It is not a Palindrome.\n");
    }
    else
    {
        printf("It is a Palindrome.\n");
    }
    
    system("pause");
    return 0;
}