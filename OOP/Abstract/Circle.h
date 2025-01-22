#include <string>
#include "Form.h"
#include "math.h"

using namespace std;
class Circle : public Form{

    private:
    double _radius;

    public:
    Circle(string name, string color, double radius);
    double getRadius(){return _radius;}
    void setRadius(double radius){_radius = radius;}
    double flaeche() override {return 3.14 *  pow(_radius, 2);}
};

Circle::Circle(string name, string color,double radius): Form(name, color), _radius(radius)  {}
