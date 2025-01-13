#include <iostream>

using namespace std;

int main(){
    int array [5] = {1, 2, 3, 4, 5};
    vector<int> v1(3);
    v1[0] = 1;
    v1.push_back(2);

    cout<<v1[0]<<endl;
    cout<<v1[1]<<endl;

    // type parameter
    return 1;
}