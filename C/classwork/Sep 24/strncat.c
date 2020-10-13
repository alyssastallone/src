#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void) {
    char one[SIZE] = "Hello ";
    char two[] = "World!";

    printf("%s\n", strncat(one, two, 6));
    printf("One is changes as: %s\nBut two is still: %s\n, one two");

    return 0;

}