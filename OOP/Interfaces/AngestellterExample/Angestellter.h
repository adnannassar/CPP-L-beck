#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H

#include "Person.h"

class Angestellter : public Person {
    private:
        double gehalt = 24.465;
        string abteilung = "ZUV";
    public:
        Angestellter(string _name,string _vorname);
        ~Angestellter();
        double getGehalt();
        void setAbteilung(string bezeichnung);
        void drucken() ;
        bool hatUrlaub() ;
};

#endif