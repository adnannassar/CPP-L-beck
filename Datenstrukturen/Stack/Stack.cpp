#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(): last(-1) {}
bool::Stack::isEmpty(){
    // return last == -1;
    // oder 
    if (last == -1){
        return true;
    }else{
        return false;
    }
}

bool::Stack::isFull(){
    if(last == 4){
        return true;
    }else{
        return false;
    }
}

void::Stack::push(int value){
    if(isFull()){
        cout<< "Stack ist voll!" <<endl;
    }else{
        array[++last] = value;
    }
}

int::Stack::pop(){
    if(isEmpty()){
         return -1;
    }else{
        return array[last--];
    }
}