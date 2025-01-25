#ifndef BILD_H
#define BILD_H


#include "Medium.h"

namespace MediumVerwaltung {
class Bild : public Medium {
    private:
        string _ort;
    
    public:
        Bild(string titel,int jahr,string ort);
        ~Bild();
    
        string getOrt(){return _ort;}
        void setOrt(string ort){_ort = ort;}
        
        void druckeDaten() override;
};}

#endif