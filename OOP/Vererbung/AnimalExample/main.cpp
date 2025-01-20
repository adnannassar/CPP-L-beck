#include <iostream>
#include "Cat.h"


using namespace std;

int main(){
    Animal animal ("My Animal", 1);
    cout <<  "Animal: " << animal.getName() << ", Age: " <<animal.getAge() <<endl;
    animal.fressen("Alles!");

    Cat cat1 ("Luci",2 , 5.2f);
    cout <<  "Cat: " << cat1.getName() << ", Age: " <<animal.getAge() << ", Tail length: " << cat1.getTailLength() <<endl;
    cat1.fressen("Fleich");
    cat1.meaw();
    
    return 1;
}