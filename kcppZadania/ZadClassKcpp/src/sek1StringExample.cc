#include "../include/sek1StringExample.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

Sek1StringExample::Sek1StringExample(): ZadKcpp("String Example", "1") {}

string Sek1StringExample::opisZadania() const {return "Przykładowe dzialąnia na danych typu string";}

void Sek1StringExample::start() {
    string tekst = "Witaj Swiecie!";
    string drugiTekst = " C++ jest super.";

    cout << "=== POCZATKOWY TEKST: \"" << tekst << "\" ===\n" << endl;

    cout << "1. empty(): " << (tekst.empty() ? "Tak, napis jest pusty." : "Nie, napis nie jest pusty.") << endl;

    cout << "2. size(): " << tekst.size() << " znakow." << endl;
    cout << "   length(): " << tekst.length() << " znakow." << endl;

    cout << "3. at(6): Znak na pozycji 6 to: '" << tekst.at(6) << "'" << endl;
    try {
        cout << "   Proba at(50): " << tekst.at(50) << endl;
    } catch (const out_of_range& e) {
        cout << "   [BLAD/WYJATEK]: Próba wyjscia poza zakres stringa obsluzona bezpiecznie!" << endl;
    }

    size_t pozycja = tekst.find("Swiecie");
    if (pozycja != string::npos) {
        cout << "6. find(\"Swiecie\"): Znaleziono podciag na indeksie: " << pozycja << endl;
    } else {
        cout << "6. find(\"Swiecie\"): Nie znaleziono takiego podciagu." << endl;
    }

    string wycinek = tekst.substr(6, 7);
    cout << "8. substr(6, 7): Wycięty podciag to: \"" << wycinek << "\"" << endl;

    tekst.append(" Zaczynamy zabawę.");
    cout << "9. append(): Po doklejeniu tekst brzmi: \"" << tekst << "\"" << endl;

    tekst.erase(5, 8);
    cout << "5. erase(5, 8): Po usunieciu fragmentu tekst brzmi: \"" << tekst << "\"" << endl;

    cout << "7. swap() - PRZED ZAMIANA:" << endl;
    cout << "   tekst: \"" << tekst << "\"" << endl;
    cout << "   drugiTekst: \"" << drugiTekst << "\"" << endl;
    
    tekst.swap(drugiTekst);
    
    cout << "   swap() - PO ZAMIANIE:" << endl;
    cout << "   tekst: \"" << tekst << "\"" << endl;
    cout << "   drugiTekst: \"" << drugiTekst << "\"" << endl;

    tekst.clear();
    cout << "4. clear(): Po wyczyszczeniu tekst brzmi: \"" << tekst << "\"" << endl;
    cout << "   Sprawdzenie empty() po czyszczeniu: " << (tekst.empty() ? "Napis jest teraz PUSTY." : "Napis nadal cos ma.") << endl;

    cout << "\n=============================================" << endl;
    cout << "Zadanie wykonane pomyślnie!" << endl;
}