//*********************************************************
//File name	 :      0510.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[80];
    printf("Please enter a string.\n");
    gets(str);
    int len = strlen(str);
    int i;
    for(i = 0; i < len/2; ++i)
    {
        if(str[i] != str[len-i-1])
        {
            break;
        }
    }

    if(i == len / 2)
    {
        printf("Cheers! it is palindrome.\n");
    }
    else
    {
        printf("Oh, it is not palindrome.\n");
    }
    

    system("pause");
    return 0;
}

