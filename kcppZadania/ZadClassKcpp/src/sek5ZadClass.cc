#include "../include/sek5ZadClass.h"
#include <iostream>
#include <string>

using namespace std;

Konto::Konto() : wlasciciel("brak"), typKonta("osobiste"), saldo(0.0), numer(1) {}

Konto::Konto(const string& imie, double kwota)
    : wlasciciel(imie), typKonta("oszczednosciowe"), saldo(kwota), numer(100) {}

void Konto::Wypisz() const {
    std::cout << "Wlasciciel: " << wlasciciel << std::endl;
    std::cout << "Typ konta: " << typKonta << std::endl;
    std::cout << "Numer: " << numer << std::endl;
    std::cout << "Saldo: " << saldo << std::endl;
}

void Konto::ZmienNumer(int nowyNumer) {
    if (PoprawnyNumer(nowyNumer)) {
        numer = nowyNumer;
    }
}

Sek5ZadClass::Sek5ZadClass(): ZadKcpp("Zad Class", "5", "5.1") {}

string Sek5ZadClass::opisZadania() const {return "Prosty program obiektowy";}

void Sek5ZadClass::start() {
    Konto konto("Jan", 250.0);
    konto.Wplac(50.0);
    konto.Wypisz();
    konto.Wplac(20.0);
    konto.ZmienNumer(1234);
    konto.Wypisz();

    cout << "Saldo odczytane funkcja inline: " << konto.PobierzSaldo() << endl;

    KontoFirmowe firma;
    firma.wlasciciel = "Januszex sp. z.o.o";
    firma.UstawJakoFirmowe();
    firma.Wplac(1000.0);
    firma.Wypisz();
}