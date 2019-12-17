//*********************************************************
//File name	 : program3-13.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter n : ");
    scanf("%d", &n);
    double sum = 0, factorial = 1;
    for(int i = 1; i <= n; ++i)
    {
        if(1.0/factorial <= 10E-6)
        {
            sum += 1.0/factorial;
            break;
        }
        sum += 1.0/factorial;
        factorial *= i;
    }

    printf("%The result : %.10lf", sum);
    system("pause");
    return 0;
}
