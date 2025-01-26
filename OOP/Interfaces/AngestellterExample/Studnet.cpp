#include <iostream>
#include "Student.h"

int Student::naechsteMatrNr = 200200;

Student::Student(string _name,string _vorname,int _semester):Person(_name,_vorname),semester(_semester),matrNr(getNaechsteMatrNr()){}
Student::~Student(){}

int Student::getNaechsteMatrNr(){
    return naechsteMatrNr++;
}
int Student::getSemester(){
    return semester;
}
void Student::setSemester(int _semester){
    semester = _semester;
}

void Student::drucken(){
    if(email != ""){
        std::cout<<vorname<<" "<<getName()<<", E-Mail: "<<email<<", Matrikelnummer: "<<matrNr<<", Semester: "<<getSemester()<<std::endl;
    }else{
        std::cout<<vorname<<" "<<getName()<<", E-Mail: "<<"fehlt"<<", Matrikelnummer: "<<matrNr<<", Semester: "<<getSemester()<<std::endl;
    }
}

bool Student::hatUrlaub(){
    if (semester > 6){
        return true;
    }else {
        return false;
    }
}