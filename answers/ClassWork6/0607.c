//*********************************************************
//File name	 :      0607.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buf1[200], buf2[200];
    printf("Please enter a string(within 200 letters) : \n");
    gets(buf2);
    char *p1 = buf1, *p2 = buf2;
    while(*p2)
    {
        *(p1++) = *(p2++);
    }
    *p1 = '\0';

    printf("buf2 : \"%s\"\n", buf2);
    system("pause");
    return 0;
}