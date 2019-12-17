//*********************************************************
//File name	 : 0903_1.c
//Author  	 : gengbaoyuan
//Date   	 :  2019.5.15
//Student ID   : 2018217691
//*********************************************************


//Encryption

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


const char IN_FILE_PATH[] = ".\\hamlet.txt";
const char OUT_FILE_PATH[] = ".\\Cyb.dat";

#define ONE_COUNT 64


void encryptString(char *arg_buf, size_t arg_n, uint8_t arg_key)
{
    for(size_t i = 0; i < arg_n; ++i)
    {
        arg_buf[i] ^= arg_key;
    }

}



int main(void)
{
    uint8_t key;
    size_t result;
    FILE *fin, *fout;
    char buf[ONE_COUNT];
    printf("Please enter the key (a number 0~255) :");
    scanf("%d", &key);

    
    fin = fopen(IN_FILE_PATH, "rb");
    fout = fopen(OUT_FILE_PATH, "wb");
    
    while(1)
    {
        result = fread(buf, 1, ONE_COUNT, fin);
        encryptString(buf, result, key);
        fwrite(buf, 1, result, fout);
        if(result != ONE_COUNT)
        {
            break;
        }
    }

    fclose(fin);
    fclose(fout);
    printf("Encryption done.\n");
    system("pause");
    return 0;
}