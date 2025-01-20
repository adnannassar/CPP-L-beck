#include "Mitarbeiter.h"


Mitarbeiter::Mitarbeiter(
            string bueronummer, 
            std::string name, 
            float note, 
            int age, 
            bool hatBestanden , 
            char geschlecht, 
            double groesse, 
            Kontakt k1, 
            Kontakt k2

): Person(name, note, age, hatBestanden, geschlecht, groesse, k1, k2) , _bueronummer(bueronummer){}
Mitarbeiter::Mitarbeiter(): Person(""), _bueronummer(""){}
Mitarbeiter::~Mitarbeiter(){}

string Mitarbeiter::getBueronummer(){
    return _bueronummer;
}

void Mitarbeiter::setBueronummer(string bueronummer){
    _bueronummer = bueronummer;
}
