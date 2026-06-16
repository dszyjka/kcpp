#include "../include/sek3ArytmetykaWskaznikowPrzesuniecie.h"
#include <iostream>

using namespace std;

Sek3ArytmetykaWskaznikowPrzesuniecie::Sek3ArytmetykaWskaznikowPrzesuniecie(): 
    ZadKcpp("Arytmetyka Wskaznikow Przesuniecie", "3", "3.4") {}

string Sek3ArytmetykaWskaznikowPrzesuniecie::opisZadania() const {
    return "Presuwanie elementow tablicy w prawo za pomoca wskaznikow";
}

void Sek3ArytmetykaWskaznikowPrzesuniecie::przesun(int* tablica, int rozmiar) const {
    if (rozmiar <= 1) {
        return;
    }

    int ostatni = *(tablica + rozmiar - 1);

    for (int* p = tablica + rozmiar - 1; p > tablica; --p) {
        *p = *(p - 1);
    }

    *tablica = ostatni;
}

void Sek3ArytmetykaWskaznikowPrzesuniecie::wypisz(int* tablica, int rozmiar) const {
    for (int* p = tablica; p < tablica + rozmiar; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

void Sek3ArytmetykaWskaznikowPrzesuniecie::start() {
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "Przed przesunieciem: ";
    wypisz(liczby, rozmiar);

    przesun(liczby, rozmiar);

    cout << "Po przesunieciu: ";
    wypisz(liczby, rozmiar);
}