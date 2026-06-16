#include "include/ZadKcpp.h"
#include "include/sek1CharExample.h"
#include "include/sek1StringExample.h"
#include "include/sek2PrzeciazaniePole.h"
#include "include/sek2Zwracanie.h"
#include "include/sek3ArytmetykaWskaznikowKopiowanie.h"
#include "include/sek3ArytmetykaWskaznikowPrzesuniecie.h"
#include "include/sek4ZadParzysta.h"
#include "include/sek4ZadPetle.h"
#include "include/sek5MetodyAbstrakcyjne.h"
#include "include/sek5ZadClass.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> zawinTekst(const string& tekst, string::size_type szerokosc) {
    vector<string> linie;
    string::size_type start = 0;

    while (start < tekst.length()) {
        string::size_type koniec = start + szerokosc;

        if (koniec >= tekst.length()) {
            linie.push_back(tekst.substr(start));
            break;
        }

        string::size_type spacja = tekst.rfind(' ', koniec);
        if (spacja == string::npos || spacja < start) {
            spacja = koniec;
        }

        linie.push_back(tekst.substr(start, spacja - start));
        start = spacja;
        while (start < tekst.length() && tekst[start] == ' ') {
            ++start;
        }
    }

    if (linie.empty()) {
        linie.push_back("");
    }

    return linie;
}

void wypiszWycentrowanyWiersz(const string& tekst, int szerokosc) {
    int lewyMargines = (szerokosc - static_cast<int>(tekst.length())) / 2;
    int prawyMargines = szerokosc - static_cast<int>(tekst.length()) - lewyMargines;

    cout << "|"
         << setw(lewyMargines) << ""
         << tekst
         << setw(prawyMargines) << ""
         << "|" << endl;
}

void menu(ZadKcpp* tablicaZadan[]) {
    const int szerokoscNazwy = 25;
    const int szerokoscOpisu = 33;
    const int szerokoscMenu = 79;
    const string linia = "+----+----------+---------------------------+-----------------------------------+";
    const string separator = "+===============================================================================+";

    string sekcje[5] = {
        "FUNKCJA MAIN",
        "ZWRACANIE PRZEZ FUNKCJE",
        "ARYTMETYKA WSKAZNIKOW",
        "OPERACJE WEJSCIA/WYJSCIA",
        "KLASY"
    };

    cout << endl;
    cout << separator << endl;
    wypiszWycentrowanyWiersz("MENU GLOWNE", szerokoscMenu);
    cout << separator << endl;
    
    int zadId = 0;
    for (int i = 1; i < 6; ++i) {
        cout << "| SEKCJA " << i << ". " << left << setw(68) << sekcje[i - 1] << "|" << endl;
        cout << linia << endl;
        cout << "| Nr | Zadanie  | " << left << setw(szerokoscNazwy) << "Nazwa"
             << " | " << left << setw(szerokoscOpisu) << "Opis" << " |" << endl;
        cout << linia << endl;

        for (int j = 0; j < 2; ++j) {
            vector<string> nazwa = zawinTekst(tablicaZadan[zadId]->pobierzNazwe(), szerokoscNazwy);
            vector<string> opis = zawinTekst(tablicaZadan[zadId]->opisZadania(), szerokoscOpisu);
            size_t liczbaLinii = max(nazwa.size(), opis.size());

            cout << "| "
                 << right << setw(2) << zadId + 1 << " | "
                 << left << setw(8) << tablicaZadan[zadId]->pobierzNumerZadWSekcji() << " | "
                 << left << setw(szerokoscNazwy) << nazwa[0] << " | "
                 << left << setw(szerokoscOpisu) << opis[0] << " |" << endl;

            for (size_t k = 1; k < liczbaLinii; ++k) {
                cout << "|    |          | "
                     << left << setw(szerokoscNazwy) << (k < nazwa.size() ? nazwa[k] : "") << " | "
                     << left << setw(szerokoscOpisu) << (k < opis.size() ? opis[k] : "") << " |" << endl;
            }

            ++zadId;
        }

        cout << linia << endl;
    }

    cout << "| " << right << setw(2) << 0 << " | "
         << left << setw(szerokoscMenu - 6) << "Wyjscie" << "|" << endl;
    cout << separator << endl;
    cout << "Wybierz numer zadania: ";
}

int main() {
    ZadKcpp* zadania[] = {
        new Sek1CharExample(),
        new Sek1StringExample(),
        new Sek2Zwracanie(),
        new Sek2PrzeciazaniePole(),
        new Sek3ArytmetykaWskaznikowPrzesuniecie(),
        new Sek3ArytmetykaWskaznikowKopiowanie(),
        new Sek4ZadParzysta(),
        new Sek4ZadPetle(),
        new Sek5ZadClass(),
        new Sek5MetodyAbstrakcyjne()
    };

    int wybraneZadanie;

    do {
        menu(zadania);

        cin >> wybraneZadanie;

        if (wybraneZadanie > 0 && wybraneZadanie  < 11) {
            cout << endl;
            zadania[wybraneZadanie - 1]->start();
            cout << endl << "--- Nacisnij Enter, aby kontynuowac ---" << endl;
            cin.ignore();
            cin.get();
        } else if (wybraneZadanie != 0) {
            cout << "Nie ma zadania o podanym numerze" << endl;
        }

    } while (wybraneZadanie != 0);
    
    for (int i = 0; i < 10; ++i) {delete zadania[i];}
}