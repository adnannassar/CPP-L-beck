#include <iostream>  // Für die Ausgabe
using namespace std;

int main() {
    // Daten sind bakannt
   int numbers[] = {100, 2, -1, 5, 3};
   
   // Daten sind nicht bekannt
   float noten[4];
    noten[0] = 1.0;
    noten[1] = 2.0;
    noten[2] = 3.0;
    noten[3] = 4.0;


   cout << "The Index 2 is: " << numbers[2] << endl;

   numbers[2] = 4;
   
   cout << "The Index 2 is: " << numbers[2] << endl;

    cout << endl;
   // All elements of the array
    cout << "The Index 0 is: " << numbers[0] << endl;
    cout << "The Index 1 is: " << numbers[1] << endl;
    cout << "The Index 2 is: " << numbers[2] << endl;
    cout << "The Index 3 is: " << numbers[3] << endl;
    cout << "The Index 4 is: " << numbers[4] << endl;

    cout << endl;
   // All elements of the array in one line
    cout << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3] << " " << numbers[4] << endl;
    cout << endl;



    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        // oder
        // cout << vektor.at(0) << " ";
    }
}
