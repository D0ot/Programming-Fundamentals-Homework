//*********************************************************
//File name	 :      0704.c
//Author  	 :      gengbaoyuan
//Date   	 :      4.21
//Student ID   :    2018217691
//*********************************************************

#include <stdio.h>
#include <stdlib.h>

void myQuickSort(int *data, int start, int end)
{
    if(start >= end)
    {
        return ;
    }

    int key = data[end];
    int left = start - 1, right = start, temp;

    while(right < end)
    {
        if(data[right] > key)
        {
            ++left;
            temp = data[left];
            data[left] = data[right];
            data[right] = temp;
        }
        ++right;
    }

    temp = data[left + 1];
    data[left + 1] = data[right];
    data[right] = temp;

    myQuickSort(data, start, left);
    myQuickSort(data, left+2, end);

}

int main(void)
{
    int data[20];
    int size;
    printf("How many number do you want to input (please under 20) ? ");
    scanf("%d", &size);
    if(size > 20)
    {
        size = 20;
    }
    printf("Please enter %d numbers : \n", size);
    for(int i = 0; i < size; ++i)
    {
        scanf("%d", data + i);
    }
    myQuickSort(data, 0, size - 1);
    printf("Sorted Result : \n");
    
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}