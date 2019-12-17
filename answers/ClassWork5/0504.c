//*********************************************************
//File name	 :      0504.c
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
    gets(str);
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] - 'A' + 'a';
            }
        }
        
        ++i;
    }
    printf("changed string:\n%s\n", str);
    system("pause");
    return 0;
}

