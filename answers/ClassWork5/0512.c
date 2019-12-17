//*********************************************************
//File name	 :      0512.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[255], name[30], *p;
    int pos = -1;
    printf("Please enter a series of name : \n");
    gets(buf);
    printf("Enter a name to search : ");
    gets(name);

    p = buf;
    while(*p)
    {   
        int i, len;
        len = strlen(name);
        for(i = 0; i < len; ++i)
        {
            if(p[i] != name[i])
            {
                break;
            }       
        }
        if(i == len)
        {
            pos = p - buf;
            break;
        }
        ++p;
    }

    printf("%s appears at index : %d\n", name, pos);
    system("pause");
    return 0;
}

