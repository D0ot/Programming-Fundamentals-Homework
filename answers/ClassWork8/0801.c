//*********************************************************
//File name	 :      0801.c
//Author  	 :      gengbaoyuan
//Date   	 :      2019.5.5
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

#define NAME_BUFFER_SIZE 20
#define ID_BUFFER_SIZE 20
#define SCORES_NUM 4
#define BAR_LENGTH 20

typedef struct tga_student
{
    char name[NAME_BUFFER_SIZE];
    char id[ID_BUFFER_SIZE];
    int scores[SCORES_NUM];
    int scores_mean;
    int scores_sum;
} Student;

void putBar(int n)
{
    for(int i = 0; i < n; ++i)
    {
        putchar('-');
    }
    putchar('\n');
}

void getData(Student *arg_p)
{       
    printf("Enter name:\n");
    fflush(stdin);
    gets(arg_p->name);
    printf("Enter ID:\n");
    gets(arg_p->id);
    printf("Enter %d scores:", SCORES_NUM);
    arg_p->scores_sum = 0;
    for(int i = 0; i < SCORES_NUM; ++i)
    {
        scanf("%d", arg_p->scores+i);
        arg_p->scores_sum += *(arg_p->scores+i);
    }
    arg_p->scores_mean = arg_p->scores_sum / SCORES_NUM;
    
}

void printData(const Student *arg_p)
{
    putBar(BAR_LENGTH);
    printf("Name: %s\n", arg_p->name);
    printf("ID: %s\n", arg_p->id);
    printf("Scores: ");
    for(int i = 0; i < SCORES_NUM; ++i)
    {
        printf("%d, ", *(arg_p->scores+i));
    }
    printf("mean: %d, sum: %d\n", arg_p->scores_mean, arg_p->scores_sum);
}

int compStudent(const void *a, const void *b)
{
    return ((Student**)a)[0]->scores_sum - ((Student**)b)[0]->scores_sum;
    
}

int main(void)
{
    int n;
    printf("Please enter number of students: ");
    scanf("%d", &n);
    Student * data = malloc(sizeof(Student) * n);
    Student **table = malloc(sizeof(Student*) * n);
    printf("Please enter the student data one by one:\n");
    for(int i = 0; i < n; ++i)
    {
        table[i] = data + i;
        putBar(BAR_LENGTH);
        printf("%dth student data input starts.\n", i);
        getData(data + i);
        printf("%dth student data input ends.\n", i);
    }


    qsort(table, n, sizeof(Student*), compStudent);

    for(int i = 0; i < n; ++i)
    {
        printf("Show data entered:\n");
        printData(table[i]);
    }

    

    free(table);
    free(data);
    system("pause");
    return 0;
}