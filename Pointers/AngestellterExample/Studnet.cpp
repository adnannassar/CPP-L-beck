#include <iostream>
#include "Student.h"

int Student::naechsteMatrNr = 200200;

Student::Student(string name,string vorname,int semester):Person(name,vorname),matrNr(getNaechsteMatrNr()){
    this -> semester = semester;
}
Student::~Student(){}

int Student::getNaechsteMatrNr(){
    return naechsteMatrNr++;
}
int Student::getSemester(){
    return semester;
}
void Student::setSemester(int semester){
    this -> semester = semester;
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