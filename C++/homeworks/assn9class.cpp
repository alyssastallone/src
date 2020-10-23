#include <iostream>
#include <string>
#include "assn9.h"


    Person::Person(std::string name, int id)
    {
        name = name;
        count++;
        id = count;
    }
    
    int Person::getId() 
    {
        return id;
    }
    
    std::string Person::getName() 
    {
        return name;
    }
        

    //getData method
    std::string Person::getData() 
    {
        return getName();
        std::string idString = std::to_string(getId()); 
        return idString;
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
        return publications;
    }

    int Professor::getRank()
    {
        return rank;
    }

    std::string Professor::getData()
    {
        return getName();
        std::string idString = std::to_string(getId()); 
        return idString;
        std::string pubString = std::to_string(getPublications());
        return pubString;
        std::string rankString = std::to_string(getRank());
        return rankString;
    }

    Student::Student(std::string name, int id, std::string major, std::string minor)
    {
        name = name;
        count++;
        id = count;
        major = major;
        minor = minor;

    }

    std::string Student::getMajor()
    {
        return major;
    }

    std::string Student::getMinor()
    {
        return minor;
    }

    std::string Student::getData()
    {
        return getName();
        std::string idString = std::to_string(getId()); 
        return idString;
        return getMajor();
        return getMinor();

    }

    






    
