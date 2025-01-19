#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


int main(){
    Person p1 ("Maria Musterfrau", 1.7, 22, true, 'w', 1.70);

    Person p2 ("Hans Mustermann",23, 'm', 1.80);

    Person p3 ("Hassan Mustermann");
    
    p1.printPersonInfo();
    
    cout << endl;
    
    p2.printPersonInfo();
    
    cout << endl;
    
    p3.printPersonInfo();

    return 0;
}