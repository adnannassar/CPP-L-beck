#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    if(argc > 1){
        for(int i = 1; i < argc; i++){
            cout << "Argument " << i << ": " << argv[i] << endl;
        }
    }
    return 1;
}



