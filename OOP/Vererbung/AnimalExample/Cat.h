#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal{
    private: 
        float tailLength;

    public:
        Cat(string newName, int newAge, float newTailLength);
        
        // getter
        float getTailLength();
        // setter
        void setTailLength(float newTailLength);
        void meaw();
};

#endif