#include <iostream>
#include <string>

using namespace std;

int main(){
    // Ein- und Ausgabe
    // cout : Standard output stream
    cout << "Enter Your Name" << endl;
    
    // cin : Standard input stream
    string name;
    cin >> name;
    cout << "Welcome " << name << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // cerr : Standard error (output) stream
    if(age < 18){
        cerr << name << ", you are not allowed to buy cigaretts" << endl;
    }else{
        cout << name << ", you are allowed to buy cigaretts" << endl;
    }
       
    
    return 1;
}