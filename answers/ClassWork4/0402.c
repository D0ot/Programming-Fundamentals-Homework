//*********************************************************
//File name	 : 0402.c
//Author  	 : 耿宝源
//Date   	 : 2019.3.24
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[80];
    int result = 0;
    char temp, sign = 1;
    printf("Please enter a string (with no more than 80 char):\n");
    scanf("%s", str);
    int len = strlen(str);
    int i = 0;

    if(str[0] == '-')
    {
        sign = -1;
        i = 1;
    } else if (str[0] == '+') {
        sign = +1;
        i = 1;
    }

    for(; i < len; ++i)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0')*sign;
        }else
        {
            printf("Invalid data \'%c\' , Abort.\n", str[i]);
            
            system("pause");
            return 0;
        }
        
    }
    printf("Result:%d\n", result);
    
    system("pause");
    return 0;
}