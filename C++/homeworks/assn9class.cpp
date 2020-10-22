#include <iostream>
#include <string>
#include "assn9.h"


    Person::Person()
    {

    }
    
    Person::Person(std::string name, int id)
    {
        name = "";
        count++;
        id = count;
    }
    
    int Person::getId() 
    {
        
    }
    
    std::string Person::getName() 
    {

    }
        
    void Person::setName(std::string name)
    {
        name = name;
    }    

    void Person::setId(int id)
    {
        id = id;
    }

    //getData method
    void Person::getData() 
    {
        
    }

    Professor::Professor(std::string name, int id, int publications, int rank)
    {
        name = name;
        count++;
        id = count;
        publications = publications;
        rank = rank;
    }

    int Professor::getPublications()
    {

    }

    int Professor::getRank()
    {

    }

    void Professor::setPublications(int publications)
    {   
        publications = publications;
    }

    void Professor::setRank(int rank)
    {
        rank = rank;
    }

    void Professor::getData()
    {

    }






    
