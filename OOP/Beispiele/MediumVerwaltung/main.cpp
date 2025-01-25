#include <iostream> 
#include <vector>

#include "Audio.h"
#include "Bild.h"

using namespace std;
using namespace MediumVerwaltung;

int main(){

    Audio a("It Means Nothing",2007,"Stereophonics",229);
    Bild b("Gebaeude FB Informatik",2014,"Dortmund");
    
    a.druckeDaten();
    b.druckeDaten();

    a.beTrend();
    
    return 1;
}