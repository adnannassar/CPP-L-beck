#include "Person.h"
#include <iostream>

Person::Person(string name,string vorname){
    this -> name = name;
    this -> vorname = vorname;
}
Person::Person(){
    this -> name = "";
    this -> vorname = "";
}

Person::~Person() {
    std::cout<<"Person (" <<name<< ") wurde geläscht!"<<std::endl;
}