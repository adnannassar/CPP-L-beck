#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string marke;
    string modell;
    int baujahr;
};

class Address {
    public:
    string strasse;
    string hausnummer;
    string plz;
    string ort;
};


class Kontakt{
    public:
        string telefon;
        string email;
    
    void test(){
          test2();  
    }
    
    private:
    void test2(){
        
    }
       
};


class Person {
    public:
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
    Car c1;
    Address a1;
    
    Kontakt k1;
    k1.telefon = "123456789";
    k1.email = "test@gmail.com";
    k1.test();
    
    Person p1;
    Person p2;
    

    p1.name = "Max Mustermann";
    p1.age = 20;
    cout << p1.name <<endl;
    cout << p1.age  <<endl;

    return 0;
}