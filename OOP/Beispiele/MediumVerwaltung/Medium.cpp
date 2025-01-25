#include "Medium.h"

namespace MediumVerwaltung {
int Medium::counter = 0;

Medium::Medium(string titel,int jahr): id(counter++), _titel(titel), _jahr(jahr){}
Medium::~Medium(){}
}


