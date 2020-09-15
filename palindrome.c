//program that finds the largest palindrome from the product of two 3 digit numbers

#include <stdio.h>

//reverses the number obtained so that it can be checked against the original to verify it is a palindrom
int reverse(int number)
{
    int reversedNum = 0;
    while (number > 0)
    {
        //get the last digit by getting the remainder of the number divided by 10
        int lastDigit = number % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        number = number / 10;
    }
    return reversedNum;
}

//checks if the largest product obtained is a palindrome
int check(int number)
{
    //if the number found and the reversed number are equal then it is a palindrome
    if(number == reverse(number))
        return 1;
    else
        return 0;
}


int main (void)
{
    //initialize letters for for loops
    int x, y, firstNum, secondNum; //will be used for three digit numbers
    int product = 0; //stores the product of each x * y value while looping
    int largestPalin = 0; //once largest Palindrome is found it will be stored in here
    for(x = 100; x <= 999; x++)
    {
        for(y = x; y <= 999; y++) 
        {
            product = x * y;
            //check if product is a palindrome
            if(check(product)) {
            //check if the product is the largest palindrome
            //if it is set the product to largestPalin and print
                if (product > largestPalin)
                    {
                    largestPalin = product;
                    firstNum = x;
                    secondNum = y;
                    //printf("%d, %d, %d", x, y, largestPalin);
                     }
                }
            
        }
    }
    printf("%d, %d, %d", firstNum, secondNum, largestPalin);

    return 0;
}