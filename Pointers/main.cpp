#include <iostream>

using namespace std;


void (*print)();

void printHallo(){
    cout<<"Hallo"<<endl;
}

void printHalloArabic(){
    cout<<"Marhaba"<<endl;
}

int main(){
   
    print = &printHallo;
    print();
   
    print = &printHalloArabic;
    print();

    int x = 10;
    cout<< "X = " << x <<endl;

    cout<< "X adresse = " << &x << endl;

    int *ptr1 = &x;
    int *ptr2 = ptr1;

    *ptr2 = 30;
    
    cout<< "X = " << x <<endl;

    cout<<"Adresse von Pointer (ptr) auf X: " << ptr1 <<endl;
    cout<<"Value von Pointer (ptr) auf X: " << *ptr1 <<endl;

    int array[3] = {1,2,3};
    int *ptrX = &array[0];
   
   
    cout<<*ptrX<< " ist in Adresse: " << ptrX  << " gespeichert!"  << endl;
    ptrX++;
    cout<<*ptrX<< " ist in Adresse: " << ptrX << " gespeichert!"  << endl;
    ptrX++;
    cout<<*ptrX<< " ist in Adresse: " << ptrX << " gespeichert!"  << endl;


    // SIZES
    int array2[5] = {1,2,3,4,5};
    cout<<"Size of Array2 = " << sizeof(array2) <<" Bytes" << endl;
    int *ptr3 = array2;
    cout<<"Size of Pointer (ptr3) at Array2 = " << sizeof(ptr3) <<" Bytes" << endl;

    

    return 1;
}



