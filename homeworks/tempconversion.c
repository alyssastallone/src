#include <stdio.h>

//program that converts between F, C, and K
int main(void)
{
    float temp;
    float fahren;
    float kel;
    float cel;
    float ftoc;
    float ftokel;
    float ktocel;
    float ktofahren;
    char letter;
    
    printf("Enter input temperature: ");
    scanf("%f %c", &temp, &letter);

    switch(letter) {
        //if the temp is in celsius convert it to fahren and kelvin
        case 'c' :
        printf("%.02f Celsius converts to:\n", temp);
        fahren = (1.8 * temp) + 32;
        kel = temp + 273.15;
        printf("\t%.2f F\n", fahren);
        printf("\t%.2f K\n", kel);
        break;

        //if the C is uppercase the same conversions apply
         case 'C' :
        printf("%.02f Celsius converts to:\n", temp);
        fahren = (1.8 * temp) + 32;
        kel = temp + 273.15;
        printf("\t%.2f F\n", fahren);
        printf("\t%.2f K\n", kel);
        break;

        //if the temp is in kelvin convert it to fahren and celsius
        case 'k' :
        printf("%.02f Kelvin converts to:\n", temp);
        ktocel = temp - 273.15;
        ktofahren = (temp - 273.15) * 9/5 + 32;
        printf("%.2f C\n", ktocel);
        printf("%.2f F\n", ktofahren);
        break;

        //if the K is uppercase the same conversion apply
        case 'K' :
        printf("%.02f Kelvin converts to:\n", temp);
        ktocel = temp - 273.15;
        ktofahren = (temp - 273.15) * 9/5 + 32;
        printf("%.2f C\n", ktocel);
        printf("%.2f F\n", ktofahren);
        break;

        //if the temp is in fahrenheit convert it to celsius and kelvin
        case 'f' :
        printf("%.02f F converts to:\n", temp);
        ftoc = (temp - 32) * 5/9;
        ftokel = (temp - 32) * 5/9 + 273.15;
        printf("%.2f C\n", ftoc);
        printf("%.2f K\n", ftokel);
        break;

        //if the F is uppercase the same conversions apply
        case 'F' :
        printf("%.02f F converts to:\n", temp);
        ftoc = (temp - 32) * 5/9;
        ftokel = (temp - 32 ) * 5/9 + 273.15;
        printf("%.2f C\n", ftoc);
        printf("%.2f K\n", ftokel);
        break;

        default :
        {
        printf("Invalid temperature scale\n");
        return 1;
        }
    }
    return 0;
}