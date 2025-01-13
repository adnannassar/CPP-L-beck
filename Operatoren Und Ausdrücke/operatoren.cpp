#include <iostream>

using namespace std;

int main(){
        
    // Arthmetic operators : +, -, *, /, %
    int x = 10;
    int y = 20;
    int z = x + y;
    std::cout << "x + y = " << z << std::endl;
    z = x - y;
    std::cout << "x - y = " << z << std::endl;
    z = x * y;
    std::cout << "x * y = " << z << std::endl;
    z = x / y;
    std::cout << "x / y = " << z << std::endl;
    z = x % y;
    std::cout << "x % y = " << z << std::endl; // modulo operator
    
    cout<<std::endl;
    // Increment and Decrement operators : ++, --, +=, -=, *=, /=, %= 
    int a = 10; 
    int number = 30;
    number++; // number = number + 1;
    number += 5; // number = number + 5;
    number -= 5; // number = number - 5;
    number *= 5; // number = number * 5;
    number /= 5; // number = number / 5;
    number %= 5; // number = number % 5;



    
    cout<< "a = " << a++ << endl; // Post increament a = 11 in speicher und 10 in ausgabe
    cout<< "a = " << a << endl; // a = 11 in speicher und 11 in ausgabe
    cout<< "a = " << ++a << endl; // Pre increament a = 12 in speicher und 12 in ausgabe
    cout<< "a = " << a << endl; // a = 12 in speicher und 12 in ausgabe


    // Relational operators : ==, !=, >, <, >=, <=
    cout<<std::endl;
    int b = 20;
    int c = 10;
    
    bool result = b == c;

    if(result){
        cout<< "b == c : " << "true" << endl;
    }else{
        cout<< "b == c : " << "false" << endl;
    }


    // Logical operators : &&, ||, !
    cout<<std::endl;
    float note = 2.0;
    bool bestanden = note <= 4.0;
    bool masterIstErlaubt = note <= 2.5;
    if(bestanden && masterIstErlaubt){
        cout<< "Note: "<< note  << " --> Bestanden und darf Matser machen!" << endl; 
    }else{
        if(bestanden){
            cout<< "Note: "<< note  << " --> Bestanden aber darf nicht Matser machen!" << endl;
        }
        if(!bestanden){
            cout<< "Note: "<< note  << " --> Nicht bestanden!" << endl;
        }
    }


    return 1;
}