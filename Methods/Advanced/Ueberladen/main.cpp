#include <iostream>

using namespace std;

void add(float f1, float f2){
  cout << "float add " << f1+ f2 << endl;
}

void add(int i1, int i2){
 cout << "int add " << i1+ i2 << endl;
}


int main(){
    
    add(1,2);
    add(1.1f,2.2f);

    return 0;
}