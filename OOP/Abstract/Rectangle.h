#include <string>
#include "Form.h"
using namespace std;
class Rectangle : public Form{

    private:
    double _length;
    double _width;

    public:
    Rectangle(string name, string color, double length ,double width);
   
    double getWidth(){return _width;}
    void setWidth(double width){_width = width;}

    double getLength(){return _length;}
    void setLength(double length){_length = length;}
    double flaeche() override {return _length * _width;}
    
};

Rectangle::Rectangle(string name, string color, double length ,double width): Form(name, color),_length(length) ,_width(width)  {}
