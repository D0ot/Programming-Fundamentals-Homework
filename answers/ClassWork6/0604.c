//*********************************************************
//File name	 :      0604.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.9
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buf[256];
    int lower = 0, upper = 0;
    printf("Please enter a string(no more than 255 letters) : ");
    gets(buf);
    char *iter = buf - 1;
    while(*(++iter))
    {
        if(*iter >= 'a' && *iter <= 'z')
        {
            ++lower;
        } 
        else if(*iter >= 'A' && *iter <= 'Z')
        {
            ++upper;
        }

    }
    
    printf("lower : %d, upper : %d\n", lower, upper);

    system("pause");
    return 0;
}