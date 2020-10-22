#ifndef ASSN9_H
#define ASSN9_H


class Person{
    public:
    //count for increasing id numbers
    int count = 1;
    //constructor
    Person(std::string name, int id);

    //getter and setters
    std::string getName();
    int getId();
    void setName(std::string name);
    void setId(int id);

    //getData()
    void getData();

    private:
    std::string name;
    int id;

};

class Professor: public Person{
    public:
    //constructor
    Professor(std::string name, int id, int publications, int rank);
    
    //getters and setters
    int getPublications();
    int getRank();
    void setPublications(int publications);
    void setRank(int rank);

    //getData to print everything
    void getData();

    private:
    int publications;
    int rank;

};

class Student: public Person{
    public:
    //constructor
    Student(std::string name, int id, std::string major, std::string minor);

    //getters and setters
    std::string getMajor();
    std::string getMinor();
    void setMajor(std::string major);
    void setMinor(std::string minor);

    //getData
    void getData();

    
    private:
    std::string major;
    std::string minor;

};

#endif