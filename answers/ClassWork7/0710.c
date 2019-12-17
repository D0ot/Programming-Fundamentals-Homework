//*********************************************************
//File name	 :      0710.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

void CountByType(const char *str, int *output)
{
    --str;
    while(*(++str))
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            ++output[0];
        } 
        else if (*str >= 'a' && *str <= 'z')
        {
            ++output[1];
        } 
        else if (*str >= '0' && *str <= '9')
        {
            ++output[2];
        } else
        {
            ++output[3];
        }
    }
}

int main(void)
{
    char buf[80];
    int iCount[4] = {0};
    printf("Please enter a string to count : \n");
    gets(buf);
    CountByType(buf ,iCount);
    printf("Count Result : %d %d %d %d\n", 
        iCount[0], iCount[1], iCount[2], iCount[3]);
    system("pause");
    return 0;
}