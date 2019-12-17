//*********************************************************
//File name	 : program2-5.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.9
//Student ID   : 2018217691
//*********************************************************

#include <stdio.h>
#include <math.h>


int main(void)
{
    double x, y, z, dis, ax, ay, az;
    printf("Please enter the x y z\n");
    scanf("%lf%lf%lf", &x, &y, &z);
    dis = sqrt(x*x + y*y + z*z);
    ax = acos(x / dis) / 2 / M_PI * 360.0;
    ay = acos(y / dis) / 2 / M_PI * 360.0;
    az = acos(z / dis) / 2 / M_PI * 360.0;
    printf("Distance:%lf, angel of x, y, z: %7.3lf %7.3lf %7.3lf", dis, ax, ay, az);
    system("pause");
    return 0;
}
