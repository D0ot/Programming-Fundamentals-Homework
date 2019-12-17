//*********************************************************
//File name	 : program2-2.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    double length, width, hight;
    printf("Please enter the length width and hight of a cuboid.(with space separating)\n");
    scanf("%lf%lf%lf", &length, &width, &hight);

    if(length <= 0 || width <= 0 || hight <= 0) {
        printf("Data you entered are illegal. Program abort. \n");
        system("pause");
        return 1;
    }
    printf("Volume of cuboid:%lf\n", length * width * hight);

    system("pause");

    return 0;

}
