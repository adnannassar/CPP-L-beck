#include "Kontakt.h"

Kontakt::Kontakt(std::string type, std::string value) : _type(type), _value(value){}
Kontakt::Kontakt() :_type(""), _value(""){}
Kontakt::~Kontakt(){}


std::string Kontakt::getType(){
    return _type;
}

std::string Kontakt::getValue(){
    return _value;
}


void Kontakt::setType(std::string type){
    _type = type;
}

void Kontakt::setValue(std::string value){
    _value = value;
}