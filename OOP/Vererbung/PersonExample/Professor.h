#include <string>

using namespace std;

class Professor{
    private:
       string _fachbereich;
    public:
        Professor(string fachbereich);
        Professor();
        ~Professor();
        string getFachbereich();
        void setFachbereich(string fachbereich);
};
