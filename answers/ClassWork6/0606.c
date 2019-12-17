//*********************************************************
//File name	 :      0606.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str1[180], str2[80];
    printf("Please type in 2 strings:\n");
    gets(str1);
    gets(str2);
    
    char *p1 = str1 + strlen(str1), *p2 = str2;

    while(*p2)
    {
        *(p1++) = *(p2++);
    }

    *(p1+1) = '\0';
    printf("result : %s\n", str1);

    system("pause");
    return 0;
}