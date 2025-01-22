#include "Cat.h"
#include <iostream>

Cat::Cat(string newName, int newAge ,float newTailLength): Animal(newName, newAge), tailLength(newTailLength) {}
float Cat::getTailLength(){return tailLength;}
void Cat::setTailLength(float newTailLength){tailLength = newTailLength;}
void Cat::meaw(){std::cout << "Meaw Meaw" << std::endl; }

void Cat::fressen(string futter) {std::cout<< "Cat frisst " << futter <<std::endl; }
