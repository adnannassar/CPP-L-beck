
#include  <iostream>

using namespace std;

long fakRecursive(int);
long fakIterative(int);
void rev1Iterative(int);
void rev1Recursive(int);
int ulam(int);
void ulamPrint(int);
void fiboIterative(int); 
int fiboRecursive(int); 

int main(){

    cout<<"Fakültät Recursive von 4: " << fakRecursive(4) <<endl;
    cout<<"Fakültät Iterative von 4: " << fakIterative(4) <<endl;
    cout<<"Reverse Recursive von 1234: "; 
    rev1Recursive(1234); 
    cout<<endl;
    cout<<"Reverse Iterative von 1234: ";
    rev1Iterative(1234);
    cout<<endl;

    cout<<"Ulam(3): " << ulam(3)<<endl;
    cout<<"Ulam(5): " << ulam(5)<<endl;
    cout<<"Ulam(6): " << ulam(6)<<endl;
    cout<<"Ulam(7): " << ulam(7)<<endl;
    cout<<"Ulam(8): " << ulam(8)<<endl;
    cout<<"Ulam(3): ";
    ulamPrint(3);

    cout<<"Fibonaci(7): ";
    fiboIterative(7);
    
    cout<<"Fibonaci(7): " << fiboRecursive(7) <<endl;
   
    return 1;
}

long fakRecursive(int n){
    if(n == 0){
        return 1;
    }
    return n *  fakRecursive (n-1);
}

long fakIterative(int n){
    long erg = 1;
    for(int i = 1 ; i<= n ; i++){
        erg *= i;
    }

    return erg;
}


void rev1Recursive(int n){
    cout << (n %10);   
    if(n > 9){
        rev1Recursive(n /10);
    }
}


void rev1Iterative(int n){
    if(n == 0) {
        return;
    }
    while (n > 0){
        cout << (n %10);   
        n = n/10;
    }
    cout<<endl;
}

int ulam(int n){
    if(n <= 1){
        return 1;
    }
    else if(n % 2 == 0){
        return ulam(n /2);
    }else{
        return ulam(3 * n  +1);
    }
}

void ulamPrint(int n) {
    if( n != 1){
            cout << n << " --> "; // Print the current value
    }
    if (n == 1) {
        cout << n <<endl;
        return; // Base case: stop recursion when n == 1
    } else if (n % 2 == 0) {
        ulamPrint(n / 2); // Recursive case for even numbers
    } else {
        ulamPrint(3 * n + 1); // Recursive case for odd numbers
    }
}


void fiboIterative(int n ){
    int a = 1;
    int b = 1;
    int c = 0;

    cout<< a << " " <<  b << " ";
    for( int i = 2 ; i < n ; i++){
        c =  a + b;
        a = b;
        b = c;
        cout<< c <<" "; 
    }
    cout<<endl;
}
int fiboRecursive(int n ){
    if( n <=2 ) {
        return 1;
    }else{
        return fiboRecursive(n -2) + fiboRecursive(n-1);
    }
}
