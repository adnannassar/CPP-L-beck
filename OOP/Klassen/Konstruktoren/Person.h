#include <string>
class Person {
     private:
        std::string name;
        float note;
        int age;
        bool hatBestanden;
        char geschlecht;
        double groesse;

    public:
        Person(std::string na, float no, int a, bool b , char g, double gro);
        Person(std::string na, int a, char g, double gro);
        Person(std::string na);
        ~Person();

        void printPersonInfo();
        
        // getter
        std::string getName();
        float getNote();
        bool getHatBestanden();
        char getGeschlecht();
        double getGroesse();
        int getAge();

        // setter
        void setName(std::string na);
        void setNote(float no);
        void setHatBestanden(bool b);
    
};     
   
