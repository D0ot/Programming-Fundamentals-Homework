//*********************************************************
//File name	 :      0706.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int oct2dec(const char* octNumber)
{
    int result = 0;
    --octNumber;
    while(*(++octNumber))
    {
        result *= 8;
        result += *(octNumber)-'0';
    }
    return result;
}

int main(void)
{
    char buf[80];
    printf("Please enter a oct number : \n");
    gets(buf);
    printf("Convert it to dec : %d\n", oct2dec(buf));
    system("pause");
    return 0;
}