//*********************************************************
//File name	 : 0405.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.24
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[200];
    int count = 0;
    printf("Enter a sequence of chars : \n");

    scanf("%s", buf);
    int len = strlen(buf);
    for(int i = 0; i < len; ++i)
    {
        if(buf[i] % 10 == 3)
        {
            ++count;
        }
    }
    printf("Count:%d\n", count);
    system("pause");
    return 0;
}