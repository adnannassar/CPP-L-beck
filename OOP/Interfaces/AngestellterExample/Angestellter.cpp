#include <iostream>
#include "Angestellter.h"


Angestellter::Angestellter(string _name,string _vorname):Person(_name,_vorname){}
Angestellter::~Angestellter(){}

double Angestellter::getGehalt(){
    return gehalt;
}
void Angestellter::setAbteilung(string bezeichnung){
    abteilung = bezeichnung;
}
void Angestellter::drucken() {
    if(email != ""){
         std::cout<< vorname <<" "<< getName() <<", E-Mail: "<< email <<", Abteilung: "<< abteilung <<std::endl;
    }else{
        std::cout<<vorname<<" "<<getName()<<", E-Mail: "<<"fehlt"<<", Abteilung: "<<abteilung<<std::endl;
    }
}
bool Angestellter::hatUrlaub(){
    return false;
}