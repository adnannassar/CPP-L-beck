#include <string>

using namespace std;

//TODO student erbt von Person
class Student{
    private:
       string _matrNummer;
    public:
        Student(string matrNummer);
        Student();
        ~Student();
        string getMatrNummer();
        void setMatrNummer(string matrNummer);
};
