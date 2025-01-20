#ifndef MITARBEITER_H
#define MITARBEITER_H

#include <string>
#include "Person.h"



using namespace std;

class Mitarbeiter : public Person {
    private:
        string _bueronummer;
        
    public:
        Mitarbeiter(
            string bueronummer, 
            std::string name, 
            float note, 
            int age, 
            bool hatBestanden , 
            char geschlecht, 
            double groesse, 
            Kontakt k1, 
            Kontakt k2);
        Mitarbeiter();
        ~Mitarbeiter();
        string getBueronummer();
        void setBueronummer(string bueronummer);
};

#endif
