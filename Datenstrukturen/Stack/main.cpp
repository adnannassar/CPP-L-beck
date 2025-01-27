#include "Stack.h"

#include <iostream>


using namespace std;
int main(){

    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    stack.push(6); // stack ist voll!

    cout<< stack.pop() <<endl;
    cout<< stack.pop() <<endl;
    cout<< stack.pop() <<endl;
    cout<< stack.pop() <<endl;
    cout<< stack.pop() <<endl;


    int erg = stack.pop();
    if(erg == -1){
        cout<< "Stack ist leer!"<<endl;
    }
    
    return 1;
}