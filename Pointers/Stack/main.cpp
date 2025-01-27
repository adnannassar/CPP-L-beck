#include "Stack.h"

#include <iostream>


using namespace std;
int main(){

    Stack *s = new Stack(); // objekt in speicher adresee 0xabc12345
    Stack *tempPtr = s;

    delete tempPtr;


    s = new Stack(); // objekt in speicher adresee 0xabc101011c

    Person *p1  = new Person("Max", "Muserman");
    Person *p2 = new Person("Maria", "Test");
    Person *p3 = new Person("Hassan", "Test2");
    Person *p4 = new Person("Ghaith", "Test3");
    Person *p5 = new Person("Souzan", "Test4");


    s -> push(p1);
    s -> push(p2);
    s -> push(p3);
    s -> push(p4);
    s -> push(p5);

    s -> push(new Person("Adnan", "Nassar")); // stack ist voll!


    cout << s -> pop()->getName() <<endl; 
    cout << s -> pop()->getName() <<endl; 
    cout << s -> pop()->getName() <<endl; 
    cout << s -> pop()->getName() <<endl; 
    cout << s -> pop()->getName() <<endl; 

    Person *erg = s -> pop();
    
    if(erg == nullptr){
        cout<< "Stack ist leer!"<<endl;
    }

    delete s;
    
    return 1;
}