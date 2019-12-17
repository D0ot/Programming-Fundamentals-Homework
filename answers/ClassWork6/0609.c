//*********************************************************
//File name	 :      0609.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80], temp;
    printf("Please enter a string(within 80 letter) : \n");
    gets(str);
    printf("Revert the string entered.\n");
    char *left = str, *right = str + strlen(str) - 1;
    while(left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }

    printf("Result : %s\n", str);
    system("pause");
    return 0;
}