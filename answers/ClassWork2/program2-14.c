//*********************************************************
//File name	 : program2-14.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char c;
    printf("Please enter a char : ");
    scanf("%c", &c);
    if(c >= '0' && c <= '9')
    {
        printf("you enter a digit\n");
    }
    else
    {
        if(c >= 'a' && c <= 'z')
        {
            printf("you enter a lower alphabet\n");
        }
        else
        {
            if(c >= 'A' && c <= 'Z')
                printf("you enter a upper alphabet\n");
            else
                printf("you enter an other type char\n");
        }

    }


    system("pause");
    return 0;
}
