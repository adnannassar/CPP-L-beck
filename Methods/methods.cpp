#include<iostream>

using namespace std;


void addProzedur(int a, int b){
    int summe = a + b;
    cout << "The sum of a and b is: " << summe << endl;
}

int addFunction(int a, int b){
    int summe = a + b;
    return summe;
}

void greet(string name){
    cout << "Hallo " << name << endl;
}

void calculate(int a, int b, char opertaion){
    switch(opertaion){
        case '+':
            cout << "The sum of a and b is: " << a + b << endl;
            break;
        case '-':
            cout << "The difference of a and b is: " << a - b << endl;
            break;
        case '*':
            cout << "The product of a and b is: " << a * b << endl;
            break;
        case '/':
            cout << "The division of a and b is: " << a / b << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
}

int main(){
    int summe = addFunction(10, 20);
    // 5€ rabatt
    cout<<summe -5 <<endl;
    
    addProzedur(50, 100);
    addProzedur(3, 10);

    greet("Souzan");
    greet("Hassan");

    calculate(10, 5, '+');
    calculate(2, 1, '-');
    calculate(50, 2, '*');

    return 1;
}






