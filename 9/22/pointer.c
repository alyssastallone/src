#include <stdio.h>
#include <stddef.h>

int main() {

    int x = 7, y;
    int *xPtr;  //unitialized pointer
    xPtr = &x;
    y = *xPtr;

    printf("x = %d\nxPtr = %p\n*xPtr = %p\n", x, xPtr, y);
}