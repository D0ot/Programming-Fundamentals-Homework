//*********************************************************
//File name	 : 0901.c
//Author  	 : gengbaoyuan
//Date   	 :  2019.5.15
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

/*
how states are defined by me
bits : [7 6 5 4 3 2 1 0]

1   b7 and b6 is not used;
2   [5 4 3] is east to west
    [2 1 0] is south to north
3.  inside the [a b c] bitfield
    a is green, b is red, c is yellow
*/


/*
note : I think use uint8_t defined in head file stdint.h is a better choice, 
instead of unsigned char.
*/
typedef uint8_t BYTEPROT;


/* 
do it just for fun, we can do hardcode work in updateState()
but it decide to go over the usage of macro hahahahaha~~~~
here are some tricks to use macro
*/




#define SET_BIT(x, y) do{ \
    x |= 1 << y; \
}while(0)

/*
it is a tradition usage.
we can also write macro mult-states like below.
*/

#define SET_EW_GREEN_NEW(x) (SET_BIT(x,5), SET_BIT(x,4), SET_BIT(x,3)) 

//but i would like to use do-while, it can not be evaluated.
//but new style can be.(comma operator is used, so it has a value).

#define CER_BIT(x, y) do { \
    x &= ~(1 << y); \
} while(0)


#define SET_EW_GREEN(x) do { \
    SET_BIT(x, 5); \
    CER_BIT(x, 4); \
    CER_BIT(x, 3); \
}while(0)


#define SET_EW_RED(x) do { \
    CER_BIT(x, 5); \
    SET_BIT(x, 4); \
    CER_BIT(x, 3); \
}while(0)

#define SET_EW_YELLOW(x) do { \
    CER_BIT(x, 5); \
    CER_BIT(x, 4); \
    SET_BIT(x, 3); \
}while(0)

#define SET_SN_GREEN(x) do { \
    SET_BIT(x, 2); \
    CER_BIT(x, 1); \
    CER_BIT(x, 0); \
}while(0)

#define SET_SN_RED(x) do { \
    CER_BIT(x, 2); \
    SET_BIT(x, 1); \
    CER_BIT(x, 0); \
}while(0)

#define SET_SN_YELLOW(x) do { \
    CER_BIT(x, 2); \
    CER_BIT(x, 1); \
    SET_BIT(x, 0); \
}while(0)


int global_gt, global_rt, global_yt;
time_t global_time_ew = 0;
time_t global_time_sn = 0;

//the orignal state shoud not be yellow
void initState(BYTEPROT arg_state, int arg_gt, int arg_rt, int arg_yt)
{
    global_gt = arg_gt;
    global_rt = arg_rt;
    global_yt = arg_yt;
    
    if (arg_state & (1 << 4))
    {
        global_time_ew += global_gt + global_yt;
    }

    if(arg_state & (1 << 1))
    {
        global_time_sn += global_gt + global_yt;
    }

}


void updateState(time_t arg_timePassed)
{
    global_time_ew += arg_timePassed;
    global_time_sn += arg_timePassed;
}


BYTEPROT getNowState()
{
    BYTEPROT bp;
    time_t pos_ew = global_time_ew % (global_gt + global_rt + global_yt * 2);
    time_t pos_sn = global_time_sn % (global_gt + global_rt + global_yt * 2);

    if(pos_ew < global_gt)
    {
        SET_EW_GREEN(bp);
    } else if (pos_ew < global_gt + global_yt)
    {
        SET_EW_YELLOW(bp);
    } else if (pos_ew < global_gt + global_yt + global_rt)
    {
        SET_EW_RED(bp);
    } else
    {
        SET_EW_YELLOW(bp);
    }
    
    if(pos_sn < global_gt)
    {
        SET_SN_GREEN(bp);
    } else if(pos_sn < global_gt + global_yt)
    {
        SET_SN_YELLOW(bp);
    } else if(pos_sn < global_gt + global_rt + global_yt)
    {
        SET_SN_RED(bp);
    } else
    {
        SET_SN_YELLOW(bp);
    }
    
    return bp;
}

void printState(BYTEPROT arg_bp)
{

    char ew, sn;

    if(arg_bp & (1 << 5))
    {
        ew = 'G';
    } else if(arg_bp & (1 << 4))
    {
        ew = 'R';
    } else
    {
        ew = 'Y';
    }

    if(arg_bp & (1 << 2))
    {
        sn = 'G';
    } else if (arg_bp & (1 << 1))   
    {
        sn = 'R';
    } else
    {
        sn = 'Y';
    }
    printf("%c, %c\n", ew, sn);
    
    
}
int main(void)
{
    BYTEPROT state;
    SET_EW_GREEN(state);
    SET_SN_RED(state);

    int ta, tb, tc,loop_count;
    printf("Please enter time arguments : ");
    scanf("%d%d", &ta, &tb);
    tc = 5; //hard code for homework requirement.
    
    printf("Enter time to loop : ");
    scanf("%d", &loop_count);

    initState(state, ta, tb, tc);

    for(int i = 0; i < loop_count; ++i)
    {
        printf("time : %d\n", i);
        updateState(1);
        printState(getNowState());
    }

    system("pause");
    return 0;
}