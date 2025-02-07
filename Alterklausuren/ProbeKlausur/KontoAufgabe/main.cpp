#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
using namespace std;

class Balanzierbar{
    public:
        virtual double gibKontostand() = 0;
};


class Konto : public Balanzierbar {

    private:
        class Buchung {
            private:
                double wert;
            
            public:
                Buchung(double wert) {this->wert = wert;}
                double gibWert(){return this-> wert;}
        };

    protected:
        list<Buchung*> buchungen;

    public: 
        double gibKontostand() override {
            return 0.0;
        }
        void verbuche(double wert){
            if(gibKontostand() >= wert){
                this->buchungen.push_back(new Buchung(wert));       
            }
        }    
};


int main(){
    Konto  *k = new Konto();
    k->verbuche(500.00);
    
    return 1;
}



