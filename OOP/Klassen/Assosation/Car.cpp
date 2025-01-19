#include "Car.h"

Car::Car(std::string na, std::string ma, int sp): name(na), marke(ma), speed(sp){}
Car:: Car():name(""), marke(""), speed(0) {}
Car::~Car(){}

std::string Car::getName(){
    return name;
}

std::string Car::getMarke(){
    return marke;
}

int Car::getSpeed(){
    return speed;
}

void Car::setName(std::string na){
    name = na;
}

void Car::setMarke(std::string ma){
    marke = ma;
}

void Car::setSpeed(int sp){
    speed = sp;
}