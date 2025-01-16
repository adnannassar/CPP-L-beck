#include<iostream>


using namespace std;
int main(){

    int a = 10;
    int b = 20;
    
    int auswahl;
    do{
        std::cout<<"---------------------------"<<std::endl;
        std::cout<<"Getränkeautomat"<<std::endl;
        std::cout<<"1.Pepsi"<<std::endl;
        std::cout<<"2.Coca cola"<<std::endl;
        std::cout<<"3.Fanta"<<std::endl;
        std::cout<<"4.Ausschalten"<<std::endl;
        std::cout<<"Bitte auswählen"<<std::endl;
        std::cin>>auswahl;
        std::cout<<"---------------------------"<<std::endl;
    switch (auswahl)
    {
        case 1: std:: cout<<"Sie haben Pepsi bestellt"<<std::endl;break;
        case 2: std:: cout<<"Sie haben Coca cola bestellt"<<std::endl;break;
        case 3: std:: cout<<"Sie haben Fanta bestellt"<<std::endl;break;
        case 4: std:: cout<<"Maschine wurde ausgeschaltet"<<std::endl;break;
        default: std:: cout<<"Falsche Eingabe"<<std::endl;
    }
    }while(auswahl != 4); 
        
    return 1;
}