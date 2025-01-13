#include <iostream>  // Für die Ein- und Ausgabe
using namespace std;

int main() {
    // Erklärung der Type-Konvertierung
    cout << "Type-Konvertierung in C++:\n";
    cout << "1. Implizite (automatische) Konvertierung\n";
    cout << "2. Explizite (manuelle) Konvertierung (Casting)\n\n";

    // Implizite Konvertierung
    cout << "Beispiel für implizite (automatische) Konvertierung:\n";
    int intWert = 10;      // int-Wert
    double doubleWert;     // double-Wert

    // Automatische Konvertierung: Der int-Wert wird in double umgewandelt
    doubleWert = intWert;
    cout << "intWert (int): " << intWert << "\n";
    cout << "doubleWert (double nach impliziter Konvertierung): " << doubleWert << "\n\n";

    // Achtung: Datenverlust bei der Umwandlung
    cout << "Beispiel für Datenverlust bei der Konvertierung:\n";
    double großeZahl = 3.1415926535;  // Eine Gleitkommazahl (double)
    int gerundeteZahl = großeZahl;    // Automatische Umwandlung zu int (Verlust der Nachkommastellen)
    cout << "großeZahl (double): " << großeZahl << "\n";
    cout << "gerundeteZahl (int nach Konvertierung): " << gerundeteZahl << "\n\n";

    // Explizite Konvertierung (Casting)
    cout << "Beispiel für explizite (manuelle) Konvertierung (Casting):\n";
    double wertMitNachkommastellen = 7.89;
    
    // Manuelles Casting
    int konvertierteZahl = (int)wertMitNachkommastellen;  // C-Stil
    int cppKonvertierteZahl = static_cast<int>(wertMitNachkommastellen);  // C++-Stil

    cout << "wertMitNachkommastellen (double): " << wertMitNachkommastellen << "\n";
    cout << "konvertierteZahl (C-Stil Casting): " << konvertierteZahl << "\n";
    cout << "cppKonvertierteZahl (static_cast): " << cppKonvertierteZahl << "\n\n";

    // Typkonvertierung zwischen unsigned und signed (Gefährlich)
    cout << "Beispiel für signed/unsigned-Konvertierung:\n";
    int negativeZahl = -10;
    unsigned int unsignedZahl = negativeZahl;  // Negative Zahl wird in unsigned umgewandelt
    cout << "negativeZahl (signed int): " << negativeZahl << "\n";
    cout << "unsignedZahl (unsigned int nach Konvertierung): " << unsignedZahl << "\n";
    cout << "(Das Ergebnis kann unerwartet groß sein, da es die Werte im positiven Bereich darstellt)\n\n";

    // Zusammenfassung
    cout << "Zusammenfassung:\n";
    cout << "- Implizite Konvertierung passiert automatisch, kann aber Datenverluste verursachen.\n";
    cout << "- Explizite Konvertierung erfordert Casting und gibt mehr Kontrolle.\n";
    cout << "- Vorsicht bei der Konvertierung zwischen signed und unsigned, um Fehler zu vermeiden.\n";

    return 0;
}
