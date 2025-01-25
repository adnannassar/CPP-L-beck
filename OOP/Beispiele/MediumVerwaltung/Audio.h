#ifndef AUDIO_H
#define AUDIO_H


#include "Medium.h"
#include "Trends.h"

namespace MediumVerwaltung {

class Audio : public Medium, Trends {
    private:
        string _interpret;
        int _dauer;
    
    public:
        Audio(string titel,int jahr,string interpret, int dauer);
        ~Audio();
        
        string getInterpret(){return _interpret;}
        void setInterpret(string interpret){_interpret = interpret;}

        int getDauer(){return _dauer;}
        void setDauer(int dauer){_dauer = dauer;}
        
        void druckeDaten() override;
        void beTrend() override;
};
}
#endif