#include "Person.h"


Person::Person(string name,string vorname):email(""){
    this -> name = name;
    this -> vorname = vorname;
}

Person::~Person() {}

void Person::setEmail(string email){
    this -> email = email;
}

string Person::getEmail(){
    return email;
}

string Person::getName(){
    return name;
}