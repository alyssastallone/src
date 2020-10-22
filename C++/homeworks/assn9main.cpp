#include "assn9.h"
#include <iostream>


int main()
{
    int number;
    std::string input;
    
    //read in the number of lines to read
    std::cin >> number;
    
    //read in the input lines by getting the number of lines entered in input
    for(int i = 0; i < number; i++);
    {
        std::getline(std::cin,input);
        //if the first letter of the line is a p create a professor and print 
        //their info with getData()
        if(input.at(0)== 'p')
        {
          
        }
        //if the first letter of the line is s print the student getData()
        if(input.at(0) == 's')
        {

        }
    }
    
}