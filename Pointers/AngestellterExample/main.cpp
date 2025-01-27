#include <iostream>
#include "Angestellter.h"
#include "Student.h"
using namespace std;

int main(){
    Angestellter *a1  = new Angestellter("Knight","Michael");
    
    a1 -> setAbteilung("Technik");
    a1 -> drucken();
    
    cout << endl;
    
    Student *m1 = new Student("Vonneguth","Karl",4);
    
    m1 -> setEmail("karl@vonneguth.com");
    cout<< "Email von " << m1->getName() << ": " << m1 -> getEmail() << endl;
    m1 -> drucken();
    if(m1->hatUrlaub()){
        cout<<"Student " <<  m1 -> getName() << " hat Urlab!"<< endl;
    }else{
        cout<<"Student " <<  m1 -> getName() << " hat kein Urlab!"<< ", weil " << m1 -> getName() << " noch im Semestet " << m1 -> getSemester() << " ist." <<endl;
    }

    delete a1;

    return 0;
}