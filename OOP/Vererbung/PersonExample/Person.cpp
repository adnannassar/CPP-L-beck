#include <iostream>
#include "Person.h"

Person::Person(std::string name, float note, int age, bool hatBestanden  , char geschlecht, double groesse, Kontakt k1, Kontakt k2) : 
_name(name), _note(note), _age(age), _hatBestanden(hatBestanden), _geschlecht(geschlecht), _groesse(groesse){
    kontakte.push_back(k1);
    kontakte.push_back(k2);
}

Person::Person(std::string name,int age, char geschlecht, double groesse) : 
_name(name), _age(age), _geschlecht(geschlecht), _groesse(groesse){}

Person::Person(std::string name) : _name(name){}


Person::~Person(){
    std::cout << "Person " << _name << " wurde gelöscht" << std::endl;
}

// Getters

std::string Person::getName(){
    return _name;
}


float Person::getNote(){
    return _note;
}

int Person::getAge(){
    return _age;
}

bool Person::getHatBestanden(){
    return _hatBestanden;
}

char Person::getGeschlecht(){
    return _geschlecht;
}

double Person::getGroesse(){
    return _groesse;
}

Car Person::getCar(){
    return _car;
}

std::vector<Kontakt> Person::getKontakte(){
    return kontakte;
}

// Setters
void Person::setName(std::string name){
    _name = name;
}

void Person::setNote(float note){
    _note = note;
}

void Person::setHatBestanden(bool hatBestanden){
    _hatBestanden = hatBestanden;
}

void Person::setCar(Car car){
    _car = car;
}


void Person::printPersonInfo(){
    std::cout << "Name: " << _name << std::endl;
    
    if(_note >= 1.0 && _note <= 5.0) {
         std::cout << "Note: " << _note << std::endl;
         if(_hatBestanden ==  true) {
             std::cout << "Bestanden" << std::endl;
         } else {
             std::cout << "Nicht bestanden" << std::endl;
         }
    }

    if(_age != 0) {
        std::cout << "Alter: " << _age << std::endl;
    }

    if(_geschlecht != 0) {
        std::cout << "Geschlecht: " << _geschlecht << std::endl;
    }

    if(_groesse != 0) {
        std::cout << "Größe: " << _groesse << std::endl;
    }
}

    void Person::addKontakt(Kontakt k){
        kontakte.push_back(k);
}