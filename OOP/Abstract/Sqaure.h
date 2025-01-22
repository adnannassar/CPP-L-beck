#include <string>
#include "Form.h"
using namespace std;
class Square : public Form{

    private:
    double _width;

    public:
    Square(string name, string color, double width);
    double getWidth(){return _width;}
    void setWidth(double width){_width = width;}
    double flaeche() override {return _width * _width;}
};

Square::Square(string name, string color,double width): Form(name, color), _width(width)  {}
