#include <iostream>
using namespace std;

void printArray(int array []) {
    for(int i = 0; i < 5; i++)
    {
        if(i == 3)
        array[3] = 100;
        cout << array[i] << " ";
      
    }
    cout<< endl;
}


int main(){
    int array [] = {1,2,3,4,5};

    printArray(array);

    return 1;

}