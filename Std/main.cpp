
#include  <iostream>
#include <string>

using namespace std;


int main(){
    int x = 10;
    string xAsString = to_string(x);
    cout << "This is a String value of number 10 --> " << xAsString << endl; 

    int y = stoi("123");
    cout << "y = " << y + 5 << endl; 

    string name = "Hassan";
    cout << "Dritte Buchstabe von " << name << " ist: " << name[2] <<endl;

    // Getline Example
    string name2;
    cout<< "Enter your name: ";
    getline(cin , name2);
    cout<< "Welcome " << name2<<endl;


     // cin Example
    string hobby;
    cout<< "Enter your Hobby: ";
    cin >> hobby;
    cout<< hobby << " is a nice one!" <<endl;
    return 1;
}
