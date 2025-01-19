#include <string>
class Person {
    public:
        Person(std::string na, float no, int a, bool b , char g, double gro);
        Person(std::string na, int a, char g, double gro);
        Person(std::string na);
        std::string name;
        float note;
        int age;
        bool hatBestanden;
        char geschlecht;
        double groesse;
        void printPersonInfo();
        
    private:
      void test();
};
