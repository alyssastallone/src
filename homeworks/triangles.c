#include <stdio.h>

int main(void)
{
    printf("Enter the base:");
    int base;
    scanf("%f", &base);

    printf("Enter the height:");
    int height;
    scanf("%f", &height);

    printf("Enter the hypotenuse:");
    int hyp;
    scanf("%f", &hyp);

    if((hyp * hyp) == ((base * base) + (height * height)))
       {
            printf("It's a right triangle!");
       }
    else if((hyp * hyp) > ((base * base) + (height * height)))
       {
            printf("It's a obtuse triangle!");
       }
    else if((hyp * hyp) < ((base * base) + (height * height)))
       {
            printf("It's an acute triangle!");
       }
  return 0;
}