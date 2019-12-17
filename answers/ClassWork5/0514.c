//*********************************************************
//File name	 :      0514.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() //method 1
{
    char str[255];
    printf("Enter a string : \n");
    gets(str);
    printf("Enter another string to join the first : \n");
    gets(str + strlen(str));
    printf("The joined string : %s\n", str);
    system("pause");
    return 0;
}


int main1() //method 2
{
    char str[255], str2[255];
    int i = 0, len;
    printf("Enter a string : \n");
    gets(str);
    len = strlen(str);
    printf("Enter another string to join the first : \n");
    gets(str2);
    while(str2[i])
    {
        str[len + i] = str2[i];
        ++i;
    }
    str[len + i] = '\0';

    printf("The joined string : %s\n", str);
    system("pause");
    return 0;
}

