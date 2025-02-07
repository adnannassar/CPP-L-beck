#include "Essbar.h"

class Nassfutter : public Essbar{
    private:
        int protiene;
        int fett;

    public:
        Nassfutter(int protiene, int fett);
        int ermittleNaehwert() override;
        
        int getProtiene(){return protiene;}
        void setProtiene(int protiene) {this -> protiene =  protiene;}
       
        int getFett(){return fett;}
        void setFett(int fett) {this-> fett = fett;}
};

Nassfutter::Nassfutter(int protiene, int fett){
    this -> protiene = protiene;
    this-> fett = fett;
}

int Nassfutter::ermittleNaehwert(){
    return protiene + fett;
}