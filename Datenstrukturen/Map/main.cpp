#include <iostream>
#include <string>
#include <map> // Include the map header

using namespace std;

int main() {

    map<string, float> studentenMap = {
        {"Hassan", 1.3},
        {"Laith",  2.0},
        {"Louna",  1.3},
        {"Nadine", 1.0}
    };
    
    cout << "Hassan Note: " << studentenMap["Hassan"] << endl;

    return 0;
}
