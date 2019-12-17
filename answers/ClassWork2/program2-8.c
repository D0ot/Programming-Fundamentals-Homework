//*********************************************************
//File name	 : program2-8.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char c;
    printf("Please enter a upper letter : ");
    scanf("%c", &c);
    printf("The char entered is %c , the lower letter is %c\n", c, c + 'a' - 'A');
    system("pause");
    return 0;
}
