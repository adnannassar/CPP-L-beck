#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    Kontakt k1("Email", "test@gmail.com");
    Kontakt k2("Mobile Phone", "+49 123456789");    

    Person p1 ("Maria Musterfrau", 1.7, 22, true, 'w', 1.70, k1, k2);

    Kontakt k3("Email", "hassan123@yahoo.com");
    p1.addKontakt(k3);
    
    p1.setNote(5.0);
    p1.setHatBestanden(false);
    p1.setName("Maria Müller ");

    Car c ("Audi", "A4", 200);
    p1.setCar(c);

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
    if(p1.getCar().getName() != "") {
        cout << "Auto: " << p1.getCar().getMarke() << " " << p1.getCar().getName() << " " << p1.getCar().getSpeed() << endl;
    }

    if(p1.getKontakte().size() > 0) {
        cout << "Kontakte: " << endl;
        // size_t is an unsigned integer type that is the result of the sizeof keyword
        // we use it if the vector is made of complex objects like classes (Kontakt)
        // if the vector is made of simple objects like int, float, double, char, etc. we can use int
        for(size_t i =  0; i < p1.getKontakte().size(); i++){
            cout << p1.getKontakte()[i].getType() << " " << p1.getKontakte()[i].getValue() << endl;
        }
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