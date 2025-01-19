#include <string>
#include "Car.h"
#include "Kontakt.h"

class Person {
     private:
        std::string _name;
        float _note;
        int _age;
        bool _hatBestanden;
        char _geschlecht;
        double _groesse;
        Car _car; // 1 --> 1
        std::vector<Kontakt> kontakte; //  1 --> 2 ... n

    public:
        Person(std::string name, float note, int age, bool hatBestanden , char geschlecht, double groesse, Kontakt k1, Kontakt k2);
        Person(std::string na, int a, char g, double gro);
        Person(std::string na);
        ~Person();

        void printPersonInfo();
        void addKontakt(Kontakt k);
        
        // getter
        std::string getName();
        float getNote();
        bool getHatBestanden();
        char getGeschlecht();
        double getGroesse();
        int getAge();
        Car getCar(); // 1 --> 1 (kann beziehung)
        std::vector<Kontakt> getKontakte(); // 1 --> 2 ... n (muss beziehung)
    
        
        // setter
        void setName(std::string na);
        void setNote(float no);
        void setHatBestanden(bool b);
        void setCar(Car c);
};     
   
