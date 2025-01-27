#include <iostream>
#include "Angestellter.h"

using namespace std;

Angestellter::Angestellter(string name,string vorname):Person(name,vorname){}
Angestellter::~Angestellter(){
    cout<<"Objekt Angestellter (" << name<< ") wurde gejöscht" <<endl;
}

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