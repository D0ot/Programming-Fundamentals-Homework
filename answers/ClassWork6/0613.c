//*********************************************************
//File name	 :      0613.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[26], str2[101], *p, temp;
    printf("Please enter a hexadecimal(with in 25 letter): \n");
    gets(str);
    p = str - 1;
    while(*(++p))
    {
        
        if(*p >= 'A' && *p <= 'F')
        {
            temp = *p - 'A' + 10;
        } else if (*p >= 'a' && *p <= 'f') {
            temp = *p - 'a' + 10;  
        } else if (*p >= '0' && *p <= '9') {
            temp = *p - '0';
        }

        str2[4*(p-str) + 0] = temp / 8 ? '1' : '0';
        str2[4*(p-str) + 1] = (temp % 8) / 4 ? '1' : '0';
        str2[4*(p-str) + 2] = (temp % 4) / 2 ? '1' : '0';
        str2[4*(p-str) + 3] = (temp % 2) ? '1' : '0';
        
        
    }
    str2[4*(p-str)] = '\0';

    p = str2 - 1;

    while(*(++p) == '0');

    printf("Binary form : \n");
    printf("%s\n", p);
    system("pause");
    return 0;
}