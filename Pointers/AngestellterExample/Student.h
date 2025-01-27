#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person{
    private:
        static int naechsteMatrNr;
        int matrNr;
        int semester;
       
    public:
        Student(string name, string vornmae, int semester);
        ~Student();
        static int getNaechsteMatrNr();
        int getSemester();
        void setSemester(int semester);
        void drucken() override;
        bool hatUrlaub() override;
};
#endif