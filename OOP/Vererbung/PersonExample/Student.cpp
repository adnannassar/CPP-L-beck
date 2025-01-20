#include "Student.h"

Student::Student(string matrNummer): _matrNummer(matrNummer){}
Student::Student():_matrNummer(""){}
Student::~Student(){}
string Student::getMatrNummer(){
    return _matrNummer;
}
void Student::setMatrNummer(string matrNummer){
    _matrNummer = matrNummer;
}