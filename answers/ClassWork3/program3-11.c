//*********************************************************
//File name	 : program3-11.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char i;
    for(i = ' '; i != '~'; ++i)
    {
        printf("|%3d:%3c|", i, i);
        if((i - ' ')%4 == 3)
        {
            printf("\n");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}
