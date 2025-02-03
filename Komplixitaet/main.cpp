#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void deterministicDieRoll() {
    srand(0); 
    for (int i = 0; i < 5; i++) {
        cout << "Roll " << i + 1 << ": " << (rand() % 6 + 1) << endl;
    }
}

void nachrichtSenden(string nachricht){
    // connect to port
    // login
    // select topic
    // upload nachricht!
    if(nachricht.length() > 5 ){
        cout<< "Nachricht " << nachricht << " wurde gesendet!"<<endl;
    }else{
        cout<<"Nachricht ist zu kurz!"<<endl;
    }
}

int determinateDieRollSum(int die1, int die2) {
    return die1 + die2;
}

int main() {
    // deterministicDieRoll(); // Always produces the same sequenc
    // cout << "Sum of rolls: " << determinateDieRollSum(1, 2) << endl; // Always outputs 7
    nachrichtSenden("This is a breacking news");
    nachrichtSenden("HI");


    // 05, 06, 07, 08, 09. 10. 11 , 12 , 13  --> 14
    
    return 0;
}
