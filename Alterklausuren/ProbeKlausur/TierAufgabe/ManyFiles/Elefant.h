#ifndef ELEFANT_H
#define ELEFANT_H

#include "Tier.h"

class Elefant : public Tier{
    public:
        Elefant(string name, int alter);
    
    public:
        bool istAusgewachsen() override;
};

Elefant::Elefant(string name, int alter): Tier(name, alter){}
bool Elefant::istAusgewachsen(){return alter >= 20;}

#endif