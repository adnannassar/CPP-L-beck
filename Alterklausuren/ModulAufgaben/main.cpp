
#include <iostream>
#include <string>


using namespace std;

void sortAufsteigend(std::vector<std::string> worte){

	std::vector<std::string> neueWorte;
	
	while(worte.size() > 0){
		int index = 0;
		int min = worte[0].length(); 
		for(int i = 0 ; i < worte.size() ; i++){ 
			if(worte[i].length() < min){
				min = worte[i].length();
				index = i;
			}
		}
		neueWorte.push_back(worte[index]);
		worte.erase(worte.begin()+index);
	}
	for(int i = 0 ; i < neueWorte.size() ; i++){
		std::cout << neueWorte[i] << std::endl;			
	}
}

void sortAbsteigend(std::vector<std::string> worte){

	std::vector<std::string> neueWorte;
	
	while(worte.size() > 0){
		int index = 0;
		int max = worte[0].length(); 
		for(int i = 0 ; i < worte.size() ; i++){ 
			if(worte[i].length() > max){
				max = worte[i].length();
				index = i;
			}
		}
		neueWorte.push_back(worte[index]);
		worte.erase(worte.begin()+index);
	}
	for(int i = 0 ; i < neueWorte.size() ; i++){
		std::cout << neueWorte[i] << std::endl;			
	}
}


int main(){

    vector <string> names = {"Stefan", "Immo", "Marc,", "Ian","Albert", "Regine", "Bennet", "Anna"};
    sortAbsteigend(names);
    cout<<"................."<<endl;
    sortAufsteigend(names);
    return 1;
}
