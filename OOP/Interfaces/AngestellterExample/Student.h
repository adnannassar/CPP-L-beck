#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person{
    private:
        static int naechsteMatrNr;
        int semester;
        int matrNr;
       
    public:
        Student(string _name, string _vornmae, int _semester);
        ~Student();
        static int getNaechsteMatrNr();
        int getSemester();
        void setSemester(int _semester);
        void drucken() override;
        bool hatUrlaub() override;
};
#endif