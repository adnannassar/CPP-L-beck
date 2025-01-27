#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

class Person{
    protected:
        string name;
        string vorname;

    public:
        Person(string name , string vorname);
        Person();
        ~Person();
        
        string getName() {return name;}
        string getVorname() {return vorname;}
};

#endif