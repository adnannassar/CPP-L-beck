#include <iostream>
using namespace std;


// call by value
void increment(int number){
    number = number + 1;
}

// call by refrence
void decrement(int &number){
    number = number - 1;
}

int main(){
     int a = 10;
    
    cout << "Before incrementA: " << a << endl; 
    increment(a); // aufrun, call , استدعاء
    cout << "After incrementA: " << a << endl;

    cout << endl << "Before decrementA: " << a << endl;
    decrement(a);
    cout << "After decrementA: " << a << endl;

    return 1;
}