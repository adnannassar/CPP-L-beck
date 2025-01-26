#include "Person.h"


Person::Person(string _name,string _vorname):name(_name),vorname(_vorname),email(""){}
Person::~Person() {}
void Person::setEmail(string _email){
    email=_email;
}
string Person::getEmail(){
    return email;
}
string Person::getName(){
    return name;
}