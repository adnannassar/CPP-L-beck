#ifndef TIER_H
#define TIER_H

#include <string>
#include <iostream>
#include "Essbar.h"
using namespace std;

class Tier{
    private:
        string name;
        int hunger;

    protected:
        int alter;
        Tier(string name, int alter);

    public:
        string getName() { return name;}
        void setName(string name) { this -> name = name ;}
        
        int getHunger(){return hunger;}
        void setHunger(int hunger) {this -> hunger = hunger;}

        virtual bool istAusgewachsen() = 0;
        void futtern(Essbar* futter);
        void verdauen();
};

Tier::Tier(string name, int alter){
    this -> name = name;
    this -> alter = alter;
    this -> hunger = 100;
}

void Tier::futtern(Essbar* futter){
   int futterNeahrwert = futter-> ermittleNaehwert();
   if(futterNeahrwert > 0){
        this -> hunger -= futterNeahrwert;
   }
}

void Tier::verdauen(){
    this -> hunger += 100;
    cout<<name << " hat noch " << hunger << " Hunger" <<endl;
}

#endif




