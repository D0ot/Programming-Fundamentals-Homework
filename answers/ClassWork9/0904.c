//*********************************************************
//File name	 : 0904.c
//Author  	 : gengbaoyuan
//Date   	 :  2019.5.15
//Student ID   : 2018217691
//*********************************************************


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char IN_FILE_PATH[] =  ".\\s.bin";

const size_t TABLE_SIZE = 86400;


void generateBinFile(const char * arg_file)
{
    FILE *fout = fopen(arg_file, "wb");
    double temp;
    if(fout == NULL)
    {
        printf("Error, open %s failed\n", arg_file);
        exit(1);
    }
    srand(time(NULL));
    
    for(size_t i = 0; i < TABLE_SIZE; ++i)
    {
        temp = rand() / 100.0; //to make it more "double"! hahaha
        fwrite((void*)(&temp), sizeof(double), 1, fout);
    }
    fclose(fout);

}



int main(void)
{
    FILE *fin = fopen(IN_FILE_PATH, "rb");
    time_t now;
    double value;

    if(fin == NULL)
    {
        printf("%s does not exist, generate it.\n", IN_FILE_PATH);
        generateBinFile(IN_FILE_PATH);

        fin = fopen(IN_FILE_PATH, "rb");
        if(fin == NULL)
        {
            printf("Error, open %s failed after created.\n", IN_FILE_PATH);
            exit(-1);
        }
    }
    time(&now);
    now %= TABLE_SIZE;
    fseek(fin, now * sizeof(double), SEEK_SET);
    fread((void*)&value, sizeof(double), 1, fin);
    printf("Value in the table : %lf\n", value);

    system("pause");
    return 0;
}