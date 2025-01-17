#include <iostream>
#include <string>
using namespace std;

class Car{
    string marke;
    string modell;
    int baujahr;
};

class Address{
    string strasse;
    string hausnummer;
    string plz;
    string ort;
};

class Kontakt{
    string telefon;
    string email;
};


class Person{
        string name;
        float note;
        int age;
        bool hatBestanden;
        char geschlecht;
        double groesse;
        Car car;
        Address address;
        Kontakt kontakt; 
};

int main(){
    Car bmw320;
    Car audiA3;

    Person p1;
    Person p2;
    
    return 0;
}