#include <iostream>
#include "Tiger.h"
#include "Elefant.h"
#include "Trockenfutter.h"
#include "Nassfutter.h"

using namespace std;

int main(){
    Tiger *tiger = new Tiger("Tiger", 5);
    
    Elefant *elfant = new Elefant("Elefant", 22);

    Trockenfutter *trockenfutter = new Trockenfutter(50);

    Nassfutter* nassfutter = new Nassfutter(20, 20);

    cout << "Tiger hat " << tiger->getHunger() << " Hunger"<<endl;
    
    tiger -> futtern(nassfutter);

    cout << "Tiger hat " << tiger->getHunger() << " Hunger" <<endl;

    tiger -> verdauen();

    cout << (tiger -> istAusgewachsen() ? "Tiger ist Ausgewachsen" : "Tiger ist nicht Ausgewachsen") << endl;
    




    return 0;
}