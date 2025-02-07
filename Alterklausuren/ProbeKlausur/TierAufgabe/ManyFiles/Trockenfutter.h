#include "Essbar.h"

class Trockenfutter : public Essbar{
    private:
        int kohlenhydrate;

    public:
        Trockenfutter(int kohlenhydrate);
        int ermittleNaehwert() override;
        
        int getKohlenhydrate(){return kohlenhydrate;}
        void setKohlenhydrate(int kohlenhydrate) {this-> kohlenhydrate = kohlenhydrate;}
};

Trockenfutter::Trockenfutter(int kohlenhydrate){
    this -> kohlenhydrate = kohlenhydrate;
}

int Trockenfutter::ermittleNaehwert(){
    return kohlenhydrate;
}