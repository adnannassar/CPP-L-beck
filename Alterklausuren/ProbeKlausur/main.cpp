#include <iostream>
#include <string>



using namespace std;

vector<int> aufNullZiehen (vector<int> x) {
    int smallest = x[0];
    vector<int> erg {}; 
    
    for(int i = 0; i < x.size(); i++) {
        if(x[i] < smallest) {
             smallest = x[i];
        }
    }
    
    for(int i = 0; i < x.size(); i++) {
        x[i] -= smallest;
    }
    return x;

}


int count(vector<int> vec , int number){
    int counter = 0;
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[i] == number){
            counter++;
        }
    }

    return counter;
}

vector<int> indexes(vector<int> vec , int number){
    vector <int> erg {}; 
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[i] == number){
            erg.push_back(i);
        }
    }
    return erg;
}

bool enthaeltSignal(vector<int> a, vector<int> b){
    vector <int> indexes {}; 
    int number = a[0];
    for(int i = 0 ; i < b.size(); i++){
        if(b[i] == number){
            indexes.push_back(i);
        }
    }

    bool result = true;
    for(int i = 0 ; i< a.size(); i++){
        if(a[i] != b[i]){
            result = false;  
        }
    } 

    if(result == true){
        return true;
    }


    result = true;
    for(int i = 0 ; i< a.size(); i++){
        if(a[i] != b[i+1]){
            result = false;  
        }
    } 

    return result;
}

int main(){
    vector<int> a = {1,5,2};
    vector<int> b = {1,1,5,2,9};
  
    cout<<enthaeltSignal(a, b)<<endl;
    return 1;
}
