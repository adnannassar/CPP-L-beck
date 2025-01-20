#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
class Car{
    private:
        std::string name;
        std::string marke;
        int speed;
    public:
        Car(std::string na, std::string ma, int sp); 
        Car();
       ~Car();

       // getter
        std::string getName();
        std::string getMarke();
        int getSpeed();
        // setter
        
        void setName(std::string na);
        void setMarke(std::string ma);
        void setSpeed(int sp);
};

#endif