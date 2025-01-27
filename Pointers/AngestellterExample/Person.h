#ifndef PERSON_H
#define PERSON_H

#include "Druckbar.h"
#include <string>

using std::string;

class Person : public Druckbar {
    protected:
        string name;
        string vorname;
        string email;
    public:
        Person(string name , string vorname);
        ~Person();
        
        void setEmail(string email);
        
        string getEmail();
        string getName();
        
        virtual bool hatUrlaub()= 0; 
};

#endif