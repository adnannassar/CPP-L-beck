#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(): last(-1) {}

Stack::~Stack(){
    for(size_t i = 0 ; i < size; i++ ){
        delete array[i];
    }
    cout<<"Stack deleted!"<<endl; 
}

bool Stack::isEmpty(){
    // return last == -1;
    // oder 
    if (last == -1){
        return true;
    }else{
        return false;
    }
}

bool Stack::isFull(){
    if(last == 4){
        return true;
    }else{
        return false;
    }
}

void Stack::push(Person *p){
    if(isFull()){
        cout<< "Stack ist voll!" <<endl;
    }else{
        array[++last] = p;
    }
}

Person* Stack::pop(){
    if(isEmpty()){
         return nullptr;
    }else{
        return array[last--];
    }
}