#include "Person.h"
#include <iostream>

void Person::printPersonInfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Note: " << note << std::endl;
    std::cout << "Alter: " << age << std::endl;
    std::cout << "Hat bestanden: " << hatBestanden << std::endl;
    std::cout << "Geschlecht: " << geschlecht << std::endl;
    std::cout << "Größe: " << groesse << std::endl;
}

void Person::test(){
    std::cout << "Test" << std::endl;
}