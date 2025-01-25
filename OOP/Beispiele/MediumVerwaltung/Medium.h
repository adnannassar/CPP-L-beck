#ifndef MEDIUM_H
#define MEDIUM_H

#include <string>

namespace MediumVerwaltung {

using namespace std;
using std::string;

class Medium{
    private:     
        const int id;
        string _titel;
        int _jahr;
        static int counter;
    
    
    public:
        Medium(string titel,int jahr);
        ~Medium();

        void setTitel(string newTitel){_titel = newTitel;}
        void setjahr(int newJahr){_jahr = newJahr;}
    
        int getId() const{return id;}
        string getTitel(){return _titel;}
        int getJahr(){return _jahr;}

        int alter(){return 2025 - _jahr;}
        virtual void druckeDaten() = 0;
};
}
    
#endif