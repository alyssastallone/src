#include <stdio.h>
#include "bubblesort.h"
#define SIZE 8

void bubbleSort(unsigned int a[], int size)
{
    //should have temp, a, b
    // temp = a
    // a = b
    // b = temp
    for(unsigned int pass = 1; pass < size; pass++)
    {
        for(int i = 0; i < size - 1; i++)
        {
            if(a[i] > a[i+1])
                {
                    int hold = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = hold;
                }

        }

    }

}

int main(void)
{
    int c[] = {3, 11, 4, 1, 5, 7, 2, 1};
    printf("Data items in original order\n");

    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d", c[i]);
    }
    bubbleSort(c, SIZE);

    printf("\n Data items in ascending order\n");

    //output the sorted array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}