#include "Animal.h"
#include <iostream>

Animal::Animal(string newName, int newAge): name(newName), age(newAge) {}
//getters
string Animal::getName(){return name;}
int Animal::getAge(){return age;}
//setter
void Animal::setName(string newName){name = newName;}
void Animal::setAge(int newAge){age = newAge;}

void Animal::fressen(string futter) {std::cout<< "Animal frisst " << futter <<std::endl; }
