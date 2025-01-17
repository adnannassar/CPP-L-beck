#include <iostream>

using namespace std;

int a = 10;

int main(){
    cout << a << endl;
   // cout << x << endl; // Fehler
    return 0;
}

void test1(){
    int x = 10;
    cout << a << endl;
    cout << x << endl;
}

void test2(){
    int y = 20;
     cout << a << endl;
    //  cout << x << endl; // Fehler
}