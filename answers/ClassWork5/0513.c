//*********************************************************
//File name	 :      0513.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[250], c;
    int index, i;
    printf("Please enter a string:\n");
    gets(buf);
    printf("Please enter a char and index to insert:");
    scanf("%c%d", &c, &index);
    i = strlen(buf);
    while(i != index)
    {
        buf[i+1] = buf[i];
        --i;
    }
    buf[index] = c;

    printf("Inserted string : %s\n", buf);
    system("pause");
    return 0;
}

