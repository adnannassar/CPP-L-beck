#ifndef TIGER_H
#define TIGER_H

#include "Tier.h"

class Tiger : public Tier{
    public:
        Tiger(string name, int alter);
    
    public:
        bool istAusgewachsen() override;
};

Tiger::Tiger(string name, int alter): Tier(name, alter){}
bool Tiger::istAusgewachsen(){return alter >= 6;}

#endif