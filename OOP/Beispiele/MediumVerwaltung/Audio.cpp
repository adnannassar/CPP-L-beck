#include "Audio.h"
#include <iostream>

using namespace std;
namespace MediumVerwaltung {

Audio::Audio(string titel,int jahr,string interpret, int dauer): Medium(titel,jahr), _interpret(interpret), _dauer(dauer){}
Audio::~Audio(){}


void Audio::druckeDaten(){
cout<<"ID = "<< getId() <<" \""<< getTitel() << "\" von " << getInterpret()<<" aus "<< getJahr() << " Spieldauer: "<<
        getDauer()<<" sek." << endl;
}

void Audio::beTrend() {
       cout<<"ID = "<< getId() <<" \""<< getTitel() <<"\""  << " is now a Trend!"<< endl; 
}
}
