#include <stdio.h>

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


    return 0;
}