//*********************************************************
//File name	 : program2-1.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
    double a, b, c, p, s;

    printf("Please enter length of three edges of a triangle.(with space separating)\n");

    scanf("%lf%lf%lf", &a, &b, &c);

    if(a + b <= c || a + c <= b || b + c <= a) {
        printf("Data you entered are illegal. Program abort. \n");
        system("pause");
        return 1;

    }
    p = (a + b + c) / 2;

    s = sqrt(p * (p-a) * (p-b) * (p-c));

    printf("The area of the triangle is %lf.\n", s);

    system("pause");

    return 0;

}
