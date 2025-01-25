#include <iostream>
#include "Bild.h"

namespace MediumVerwaltung {
using namespace std;
Bild::Bild(string titel,int jahr,string ort): Medium(titel,jahr), _ort(ort){}
Bild::~Bild(){}

void Bild::druckeDaten() {
    cout<<"ID = "<< getId()<<" \""<< Medium::getTitel() << "\" aufgenommen im Jahr " <<getJahr()<<" in "<<getOrt()<<endl;
}
}

