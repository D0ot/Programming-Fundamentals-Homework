//*********************************************************
//File name	 :      0611.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char buf[256], c, *p;
    printf("Please enter a string(within 255 letters) : \n");
    gets(buf);
    printf("Enter a char to delete from the string : ");
    scanf("%c", &c);
    p = buf - 1;
    while(*(++p))
    {
        if(*p == c)
        {
            while(*p)
            {
                *p = *(p+1);
                ++p;
            }
            break;
        }
    }

    printf("Final string : %s\n", buf);

    system("pause");
    return 0;
}