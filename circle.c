#include <stdio.h>
#define PI 3.1415926

int main(void) {
 float radius = 0.0;

printf("Enter radius: ");

scanf("%f", &radius);
if(radius <= 0)
{
  printf("Invalid radius. Must be greater than zero");
  return 1;}

 float diameter = 2 * radius;
 float circum = 2 * PI * radius;
 float area = PI * radius * radius;
 
printf("A circle with radius %.3f: \n", radius);

 printf("\t Diameter: %.3f \n", diameter);

 printf("\t Area: %.3f \n", area);

 printf("\t Circumference: %.3f \n", circum);

  return 0;
}