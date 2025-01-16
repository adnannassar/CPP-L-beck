#include<iostream>


using namespace std;
int main(){

    cout<<"For Schleife von 1 bis 5"<<endl;
    for( int i = 10  ; i <= 5  ; i++ ) {
        cout<< i << " ";
    }

    cout<< endl << endl <<"While Schleife von 1 bis 5"<<endl;
    int i = 10;
    while(i <= 5){ // kopf gestuerte Schleife
        cout<< i << " ";
        i++;
    } 

    
    cout<< endl << endl <<"Do While Schleife von 1 bis 5"<<endl;
    int j = 10;
    do{ // fu
        cout<< j<< " ";
        j++;
    }while (j <= 10);

    cout<< endl;

    return 1;
}