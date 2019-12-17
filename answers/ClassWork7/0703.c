//*********************************************************
//File name	 :      0703.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int countNumber(const char* str);

int main(void)
{
    char buf[80];
    printf("Please enter a string : \n");
    gets(buf);
    printf("The number char in \n%s\nis %d\n", buf, countNumber(buf));

    system("pause");
    return 0;
}


int countNumber(const char* str)
{
    int count = 0;
    str--;
    while(*(++str))
    {
        if(*str >= '0' && *str <= '9')
        {
            ++count;
        }
    }
    return count;
}