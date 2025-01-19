#include <iostream>
#include "Person.h"

// alternative way to write constructor
/*
Person::Person(std::string na, float no, int a, bool b  , char g, double gro){
    name = na;
    note = no;
    age = a;
    hatBestanden = b;
    geschlecht = g;
    groesse = gro;
}
*/

Person::Person(std::string na, float no, int a, bool b  , char g, double gro) : 
name(na), note(no), age(a), hatBestanden(b), geschlecht(g), groesse(gro){}

Person::Person(std::string na, int a, char g, double gro) : 
name(na), age(a), geschlecht(g), groesse(gro){}

Person::Person(std::string na) : name(na){}

void Person::printPersonInfo(){
    std::cout << "Name: " << name << std::endl;
    
    if(note >= 1.0 && note <= 5.0) {
         std::cout << "Note: " << note << std::endl;
         if(hatBestanden ==  true) {
             std::cout << "Bestanden" << std::endl;
         } else {
             std::cout << "Nicht bestanden" << std::endl;
         }
    }

    if(age != 0) {
        std::cout << "Alter: " << age << std::endl;
    }

    if(geschlecht != 0) {
        std::cout << "Geschlecht: " << geschlecht << std::endl;
    }
    
    if(groesse != 0) {
        std::cout << "Größe: " << groesse << std::endl;
    }
}




void Person::test(){
    std::cout << "Test" << std::endl;
}