//*********************************************************
//File name	 : program3-12.c
//Author  	 : ¹¢±¦Ô´
//Date   	 : 2019.3.18
//Student ID   : 2018217691
//*********************************************************
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i, j;
    double x, s = 1, result = 1, lastStep = 2, b, f = 1;
    printf("Enter x:");
    scanf("%lf", &x);
    b = x;
    while(1)
    {
        if(x > 2 * M_PI)
        {
            x -= 2*M_PI;
        }
        else
        {
            if(x < -2*M_PI)
            {
                x += 2*M_PI;
            }
            else
            {
                break;
            }

        }
    }


    for(i = 1; i < 10; ++i)
    {
        f *= (x*x)/(2*i*(2*i-1));
        lastStep = result;
        result += ( (i % 2 == 1) ? -f: f );
        if(fabs(lastStep - result) < 10E-6)
        {
            break;
        }

    }
    printf("my_cos(x) = %lf, cos(x)(in math.h) = %lf\n", result, cos(b));
    system("pause");
    return 0;
}
