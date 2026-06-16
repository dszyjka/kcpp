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
#include <iostream>

using namespace std;

void menu(ZadKcpp* tablicaZadan[]) {
    string menuWidth = "======================================================================";

    string sekcje[5] = {
        "Funkcja main",
        "ZWRACANIE PRZEZ FUNKCJE",
        "ARYTMETYKA WSKAZNIKOW",
        "OPERACJE WEJSCIA/WYJSCIA",
        "KLASY"
    };

    cout << endl;
    cout << menuWidth << endl;
    cout << "                           MENU GLOWNE" << endl;
    cout << menuWidth << endl;
    cout << endl;
    
    int zadId = 0;
    for (int i = 1; i < 6; ++i) {
        cout << " --- SEKCJA " << i << ". " << sekcje[i-1] << "---" << endl;

        for (int j = 0; j < 2; ++j) {
            cout << zadId + 1 << ". " <<
            tablicaZadan[zadId]->pobierzNumerZadWSekcji() <<
            " " <<
            tablicaZadan[zadId]->pobierzNazwe() <<
            " " <<
            tablicaZadan[zadId]->opisZadania() << endl;
            ++zadId;
        }
    }

    cout << endl << "0. Wyjscie" << endl; 
    cout << menuWidth << endl;
    cout << "Wybierz numer zadania" << endl;
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