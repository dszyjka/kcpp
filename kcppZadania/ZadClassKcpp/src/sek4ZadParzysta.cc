#include "../include/sek4ZadParzysta.h"
#include <iostream>

using namespace std;

Sek4ZadParzysta::Sek4ZadParzysta(): ZadKcpp("Zad Parzysta", "4") {}

bool Sek4ZadParzysta::parzystaBitowo(int liczba) const{
    // Przykład: 6 & 1 = 0, więc 6 jest parzyste; 7 & 1 = 1, więc 7 jest nieparzyste.
    return (liczba & 1) == 0;
}

bool Sek4ZadParzysta::parzystaModulo(int liczba) const {return liczba % 2 == 0;}

bool Sek4ZadParzysta::parzystaWarunkowo(int liczba) const {return (liczba % 2 == 0) ? true : false;}

void Sek4ZadParzysta::wypisz(bool wynik) const {
    cout << (wynik ? "Liczba parzysta" : "Liczba nieparzysta") << endl;
}

void Sek4ZadParzysta::start() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    wypisz(parzystaBitowo(liczba));
    wypisz(parzystaModulo(liczba));
    wypisz(parzystaWarunkowo(liczba));
}