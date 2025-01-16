#include <iostream>

using namespace std;
int main(){
    // Schleifen : for, while, do while
    cout<<"For Schleife von 1 bis 5"<<endl;
    for( int i = 1  ; i <= 5  ; i++ ) {
        cout<< i << " ";
    }

    cout<<endl <<endl;
    cout<<"For Schleife von 10 bis 0"<<endl;
    for( int i = 10  ; i >= 0  ; i-=2 ) { // 10, 8 , 6, 4, 2, 0
        cout<< i << " ";
    }

    cout<<endl <<endl;

    cout<<"While Schleife von 1 bis 5"<<endl;

    int i = 1;
    while(i <= 5){
        cout<< i << " ";
        i++;
    }

    cout<<endl <<endl;
    
    cout<<"while Schleife von 10 bis 0"<<endl;
    int j = 10;
    while(j >= 0 ) { // 10, 8 , 6, 4, 2, 0
        cout<< j << " ";
        j-=2;
    }

    cout<<endl <<endl;
    


    

    return 1;
}