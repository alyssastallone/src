#include <iostream>

int main()
{
    std::cout <<"Enter first integer : ";   //prompt user
    int number1;
    std::cin >> number1;            //read first integer from user into number1

    std::cout <<"Enter second integer :";   //prompt user for data
    int number2;
    std::cin >> number2;
    int sum = number1 + number2;
    std::cout << "Sum is " << sum << std::endl;

}