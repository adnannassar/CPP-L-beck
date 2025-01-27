#ifndef STACK_H
#define STACK_H

class Stack{
    private:
        int array[5];
        int last;

        public:
        Stack();

        bool isEmpty();
        bool isFull();
        void push(int value);
        int pop();
};

#endif