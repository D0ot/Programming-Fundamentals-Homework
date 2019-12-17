//*********************************************************
//File name	 : 0902.c
//Author  	 : gengbaoyuan
//Date   	 :  2019.5.15
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>


//to make it flexible
const int BAR_LENGTH = 30;
const int STUDENT_NUMBER = 10;
const char FILE_PATH[] = ".\\StuInf.csv";

typedef struct
{
    char name[20];
    char major[20];
    char id[20];
    int class, grade[3], average;

} Student;




void putBar(int arg_n, char arg_c)
{
    for(int i = 0; i < arg_n; ++i)
    {
        putchar(arg_c);
    }
    putchar('\n');
}


void generateCvsString(char *arg_buf, const Student* arg_data)
{
    sprintf(arg_buf, "%s, %s, %d, %d, %d, %d\n", 
        arg_data->name, arg_data->id, 
        arg_data->grade[0], arg_data->grade[1], arg_data->grade[2], 
        arg_data->average);
}

void inputData(Student* arg_in)
{
    fflush(stdin);
    printf("Enter name : \n");
    gets(arg_in->name);
    printf("Enter major : \n");
    gets(arg_in->major);
    printf("Enter the ID : \n");
    gets(arg_in->id);

    fflush(stdin);
    printf("Enter class number : \n");
    scanf("%d", &(arg_in->class));
    printf("Enter 3 grades : ");
    scanf("%d%d%d", arg_in->grade, arg_in->grade+1, arg_in->grade+2);
    arg_in->average = (arg_in->grade[0] + arg_in->grade[1] + arg_in->grade[2]) / 3;

}

int main(void)
{
    Student data[10];
    FILE *fb = fopen(FILE_PATH, "w");
    char outputBuf[200];

    printf("Please enter %d students' infomation : \n", STUDENT_NUMBER);
    for(int i = 0; i < STUDENT_NUMBER; ++i)
    {
        putBar(BAR_LENGTH, '-');
        printf("Enter %dth student's infomation : \n", i + 1);
        inputData(data + i);
        printf("The %dth student's infomation input done.\n\n", i + 1);

        generateCvsString(outputBuf, data + i);
        fputs(outputBuf, fb);
    }
    fclose(fb);
    system("pause");
    return 0;
}