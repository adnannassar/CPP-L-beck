#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class Animal{
        private:
                string name;
                int age;
        public:
                Animal(string newName, int newAge);
                // getters
                string getName();
                int getAge();
                // setters
                void setName(string name);
                void setAge(int newAge);
                
                // weiter methoden
                virtual void fressen(string futter);
};

#endif