#ifndef KONTAKT_H
#define KONTAKT_H


#include <string>
class Kontakt {
private:
    std::string _type; // email, phone, fax
    std::string _value; // test@gmail.com, 123456789, 123456789

public:
    Kontakt(std::string type, std::string value);
    Kontakt();

    ~Kontakt();

    // getter
    std::string getType();
    std::string getValue();

    // setter
    void setType(std::string t);
    void setValue(std::string v);

};

#endif