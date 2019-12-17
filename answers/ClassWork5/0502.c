//*********************************************************
//File name	 :      0502.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.4.7
//Student ID :      2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>

//2 versions in this file

int main() // with scores array
{

    int scores[10],counts[5] = {0}, temp;
    printf("Please enter 10 integers as scores:\n");

    for(int index = 0; index < 10; ++index)
    {
        scanf("%d", &temp);
        if(temp > 100 || temp < 0)
        {
            printf("range of score is 0 to 100. \n");
            printf("Please check the error data and enter again.\n");
            --index;
            continue;
        }

        scores[index] = temp;

    }

    for(int index = 0; index < 10; ++index)
    {
        if(scores[index] < 60)
        {
            ++counts[0];
        }else
        {
            if(scores[index] == 100)
            {
                ++counts[4];
            }else
            {
                ++counts[scores[index]/10-5];
            } 
        }
    }


    printf("Data input done.\n");
    printf("Number of grades:\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("%c:%d ", 'A'+i, counts[4-i]);
    }

    printf("\n");
    system("pause");
    return 0;

}

int main2() // without scores array
{

    int counts[5] = {0}, temp;
    printf("Please enter 10 integers as scores:\n");

    for(int index = 0; index < 10; ++index)
    {
        scanf("%d", &temp);
        if(temp > 100 || temp < 0)
        {
            printf("range of score is 0 to 100. \n");
            printf("Please check the error data and enter again.\n");
            --index;
            continue;
        }

        if(temp < 60)
        {
            ++counts[0];
        }else
        {
            if(temp == 100)
            {
                ++counts[4];
            }else
            {
                ++counts[temp/10-5];
            }
            
        }

    }

    printf("Data input done.\n");
    printf("Number of grades:\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("%c:%d ", 'A'+i, counts[4-i]);
    }

    printf("\n");
    system("pause");
    return 0;
}



