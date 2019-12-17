//*********************************************************
//File name	 :      0501.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int max, temp, pos;

    printf("Please enter 10 integers:\n");

    //can be done with out extral array
    scanf("%d", &max);
    pos = 0;
    for(int index = 1; index < 10; ++index)
    {
        scanf("%d", &temp);
        if(temp >= max)
        {
            pos = index;
            max = temp;
        }
    }
    printf("The maximum number is %d , located at index : %d\n", max, pos);
    system("pause");
    return 0;
}

