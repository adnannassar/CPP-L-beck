#ifndef STACK_H
#define STACK_H

#include "Person.h"


class Stack{
    private:
        static const int size = 5;
        Person* array[size];
        int last;

        public:
        Stack();
        ~Stack();

        bool isEmpty();
        bool isFull();
        void push(Person *p);
        Person* pop();
};

#endif