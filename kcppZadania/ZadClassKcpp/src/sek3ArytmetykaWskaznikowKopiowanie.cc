#include "../include/sek3ArytmetykaWskaznikowKopiowanie.h"
#include <iostream>

using namespace std;

Sek3ArytmetykaWskaznikowKopiowanie::Sek3ArytmetykaWskaznikowKopiowanie():
    ZadKcpp("Arytmetyka Wskaznikow Kopiowanie", "3") {}

    string Sek3ArytmetykaWskaznikowKopiowanie::opisZadania() const {
        return "Kopiowanie tablicy przy uzyciu wskaznikow";}

void Sek3ArytmetykaWskaznikowKopiowanie::kopiujTablice(int* zrodlo, int* cel, int rozmiar) const {
    for (int* p = zrodlo, *q = cel; p < zrodlo + rozmiar; ++p, ++q) {*q = *p;}
}

void Sek3ArytmetykaWskaznikowKopiowanie::wypisz(int* tablica, int rozmiar) const {
    for (int* p = tablica; p < tablica + rozmiar; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

void Sek3ArytmetykaWskaznikowKopiowanie::start() {
    int pierwsza[] = {3, 6, 9, 12, 15};
    int druga[5];
    int rozmiar = sizeof(pierwsza) / sizeof(pierwsza[0]);

    kopiujTablice(pierwsza, druga, rozmiar);

    cout << "Tablica zrodlowa: ";
    wypisz(pierwsza, rozmiar);

    cout << "Tablica skopiowana: ";
    wypisz(druga, rozmiar);
}