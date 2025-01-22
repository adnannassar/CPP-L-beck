
#include "Sqaure.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using namespace std;

int main(){

    // Form f ("Unbekannter Form","Black"); // WICHTIG von abstrkte klassen dürfen keine Objekte erzeugt werden!!!!!!!
    // f.flaeche();

    Square s("Square","White",10);
    cout<<"ID: " << s.getID() << ", Name: " <<s.getName() << ", Color: " <<s.getColor() <<", Fläche: " << s.flaeche()<<endl <<endl;

    
    Rectangle r ("Rectangle","Red",50, 20);
    cout<<"ID: " << r.getID() << ", Name: " <<r.getName() << ", Color: " <<r.getColor() <<", Fläche: " << r.flaeche()<<endl<<endl;


    Circle c ("Circle","Yellow",15.8);
    cout<<"ID: " << c.getID() << ", Name: " <<c.getName() << ", Color: " <<c.getColor() <<", Fläche: " << c.flaeche()<<endl<<endl;

    cout<<"Anzahl Formen :" <<Form::anzahlFormen() <<endl;

    return 1;
}