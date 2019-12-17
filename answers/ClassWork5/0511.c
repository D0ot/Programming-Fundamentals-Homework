//*********************************************************
//File name	 :      0511.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    char buf[255], c, *p;
    int count = 0;
    printf("Please enter a string : \n");
    gets(buf);
    printf("Enter a char to counts times of apperances in previous string : ");
    scanf("%c", &c);
    p = buf;
    while(*p)
    {
        if(*p++ == c)
        {
            ++count;
        }
    }
    printf("Times:%d\n", count);


    system("pause");
    return 0;
}

