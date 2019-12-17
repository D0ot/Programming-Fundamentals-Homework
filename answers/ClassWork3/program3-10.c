//*********************************************************
//File name	 : program3-10.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //method 1
    printf("PI:%.20lf\n", M_PI);


    //method 2
    double u = 1, d = -1;
    double pi = asin(u) - asin(d) + u*sqrt(1-u*u) - d*sqrt(1-d*d);

    printf("PI:%.20lf\n", pi);

    system("pause");
    return 0;
}

