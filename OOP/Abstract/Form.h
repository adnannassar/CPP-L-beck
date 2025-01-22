#ifndef FORM_H
#define FORM_H

#include <string>

using namespace std;
class Form{

    private:
    string _name;  // object attribute
    string _color; // object attribute
    const int _id;   // object attribute
    
    static int counter; // class atrribute

    public:
    Form(string name, string color);
    
    string getName(){return _name;}
    void setName(string name){_name = name;}
    
    int getID(){return _id;}


    string getColor(){return _color;}
    void setColor(string color){_color = color;}

    virtual double flaeche() = 0; // abstract methode! oder virtual pure methode!

    static int anzahlFormen();

};

int Form::counter = 1;

Form::Form(string name, string color): _name(name), _color(color), _id(counter) {
    counter++ ;
}

int Form::anzahlFormen(){return counter -1; }


#endif