#include "Professor.h"

Professor::Professor(string fachbereich): _fachbereich(fachbereich){}
Professor::Professor():_fachbereich(""){}
Professor::~Professor(){}
string Professor::getFachbereich(){
    return _fachbereich;
}
void Professor::setFachbereich(string fachbereich){
    _fachbereich = fachbereich;
}