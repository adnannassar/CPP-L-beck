#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    
    Person p1 ("Maria Musterfrau", 1.7, 22, true, 'w', 1.70);
    
    p1.setNote(5.0);
    p1.setHatBestanden(false);
    p1.setName("Maria Müller ");

    cout<< "Name: " << p1.getName() << endl;
    cout<< "Note: " << p1.getNote() << endl;
    cout<< "Alter: " << p1.getAge() << endl;
    cout<< "Geschlecht: " << p1.getGeschlecht() << endl;
    cout<< "Größe: " << p1.getGroesse() << endl;
    if(p1.getHatBestanden() == true) {
        cout<< "Hat bestanden: Ja" << endl;
    } else {
        cout<< "Hat bestanden: Nein" << endl;
    }

    cout << endl;

    Person p2 ("Hans Mustermann",23, 'm', 1.80);

    Person p3 ("Hassan Mustermann");
    
    p1.printPersonInfo();
    
    cout << endl;
    
    p2.printPersonInfo();
    
    cout << endl;
    
    p3.printPersonInfo();

    cout << endl;



    return 0;
}