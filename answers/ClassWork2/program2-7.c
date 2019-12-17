//*********************************************************
//File name	 : program2-7.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char c;
    printf("Please enter a numeric char:");
    scanf("%c", &c);
    printf("char entered is %d , ASCII: %d\n", c - '0',c);
    system("pause");
    return 0;
}
