#include <iostream>  // Für die Ausgabe
using namespace std;

void basics(){
 // Variablen und Datentypen Erklärung
    cout << "Variablen sind Speicherplätze, in denen Werte gespeichert werden können.\n";
    cout << "Ein Datentyp definiert, welche Art von Daten eine Variable speichern kann.\n";
    cout << "Hier sind einige grundlegende Datentypen in C++ und ihre Speichergröße:\n\n";

    // Ganze Zahlen (Integer)
    int i = 42;
    cout << "Datentyp: int\n";
    cout << "Beispielwert: " << i << "\n";
    cout << "Größe von int: " << sizeof(int) << " Bytes\n\n";

    // Gleitkommazahlen (Float und Double)
    float f = 3.14f;
    double d = 3.1415926535;
    cout << "Datentyp: float\n";
    cout << "Beispielwert: " << f << "\n";
    cout << "Größe von float: " << sizeof(float) << " Bytes\n\n";
    
    cout << "Datentyp: double\n";
    cout << "Beispielwert: " << d << "\n";
    cout << "Größe von double: " << sizeof(double) << " Bytes\n\n";

    // Zeichen (Character)
    char c = 'A';
    cout << "Datentyp: char\n";
    cout << "Beispielwert: '" << c << "'\n";
    cout << "Größe von char: " << sizeof(char) << " Bytes\n\n";

    // Boolean (Wahr oder Falsch)
    bool b = true;
    cout << "Datentyp: bool\n";
    cout << "Beispielwert: " << (b ? "true" : "false") << "\n";
    cout << "Größe von bool: " << sizeof(bool) << " Bytes\n\n";

    // Lange Ganzzahlen (Long und Long Long)
    long l = 1000000L;
    long long ll = 10000000000LL;
    cout << "Datentyp: long\n";
    cout << "Beispielwert: " << l << "\n";
    cout << "Größe von long: " << sizeof(long) << " Bytes\n\n";

    cout << "Datentyp: long long\n";
    cout << "Beispielwert: " << ll << "\n";
    cout << "Größe von long long: " << sizeof(long long) << " Bytes\n\n";

    // Short Ganzzahlen (kleinere Ganzzahlen)
    short s = 32000;
    cout << "Datentyp: short\n";
    cout << "Beispielwert: " << s << "\n";
    cout << "Größe von short: " << sizeof(short) << " Bytes\n\n";

    // Unsigned Typen (keine negativen Werte)
    unsigned int ui = 4000000000U;
    cout << "Datentyp: unsigned int\n";
    cout << "Beispielwert: " << ui << "\n";
    cout << "Größe von unsigned int: " << sizeof(unsigned int) << " Bytes\n\n";

    // void* zeigt auf einen Speicherbereich, hat aber keine feste Größe für einen Wert
    cout << "Datentyp: void*\n";
    cout << "Größe von void*: " << sizeof(void*) << " Bytes (Platz für Speicheradresse)\n\n";

    cout << "Hinweis: Die genaue Größe kann auf verschiedenen Systemen unterschiedlich sein.\n";


     // C++-String (std::string)
    string cppString = "Hallo C++!";
    cout << "Datentyp: std::string\n";
    cout << "Beispielwert: \"" << cppString << "\"\n";
    cout << "Länge des Strings: " << cppString.length() << " Zeichen\n";
    cout << "Größe des std::string-Objekts: " << sizeof(cppString) << " Bytes (Verwaltung, nicht Inhalt)\n\n";

    // String-Operationen
    string vorname = "Thomas";
    string nachname = "Müller";
    string vollerName = vorname + " " + nachname;  // Verkettung
    cout << "Beispiel einer String-Verkettung:\n";
    cout << "Vorname: \"" << vorname << "\"\n";
    cout << "Nachname: \"" << nachname << "\"\n";
    cout << "Vollständiger Name nach Verkettung: \"" << vollerName << "\"\n";
    cout << "Länge des vollständigen Namens: " << vollerName.length() << " Zeichen\n\n";
}

int main() {
    // basics();
    char letter1 = 'A';
    char letter2 = 65;

    int letter3 = 'A';


    cout<< letter1 <<endl;
    cout<< letter2 <<endl;
    cout<< letter3 <<endl;

    
    return 0;
}
