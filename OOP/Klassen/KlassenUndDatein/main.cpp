#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    Person p1;
    p1.name = "Max Mustermann";
    p1.note = 1.3;
    p1.age = 21;
    p1.hatBestanden = true;
    p1.geschlecht = 'm';
    p1.groesse = 1.80;

    p1.printPersonInfo();
    // p1.test(); // kein Zugriff auf private Methode

    return 0;
}