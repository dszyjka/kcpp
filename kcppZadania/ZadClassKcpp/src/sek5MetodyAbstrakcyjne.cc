#include "../include/sek5MetodyAbstrakcyjne.h"
#include <vector>
#include <iostream>
#include <cmath>
#include <memory>

using namespace std;

Kwadrat::Kwadrat(double bok) : bok(bok) {}
double Kwadrat::pole() const { return bok * bok; }
double Kwadrat::obwod() const { return 4.0 * bok; }
void Kwadrat::wypisz() const { cout << "Kwadrat, bok: " << bok << "\n"; }

double Trojkat::pole() const {
    double p = obwod() / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}
double Trojkat::obwod() const { return a + b + c; }
void Trojkat::wypisz() const { cout << "Trojkat, boki: " << a << ", " << b << ", " << c << "\n"; }

Prostokat::Prostokat(double szerokosc, double wysokosc)
      : szerokosc(szerokosc), wysokosc(wysokosc) {}

double Prostokat::pole() const { return szerokosc * wysokosc; }
double Prostokat::obwod() const { return 2.0 * (szerokosc + wysokosc); }
void Prostokat::wypisz() const { cout << "Prostokat, boki: " << szerokosc << ", " << wysokosc << "\n"; }

Kolo::Kolo(double promien) : promien(promien) {}
double Kolo::pole() const { return PI * promien * promien; }
double Kolo::obwod() const { return 2.0 * PI * promien; }

double Kolo::dystans(double metryKwadratoweNaOsobe) const {
    if (metryKwadratoweNaOsobe <= 0.0) {
        return 0.0;
    }
    return sqrt(metryKwadratoweNaOsobe / PI);
}

void Kolo::wypisz() const { cout << "Kolo, promien: " << promien << "\n"; }

Sek5MetodyAbstrakcyjne::Sek5MetodyAbstrakcyjne() : ZadKcpp("Metody Abstrakcyjne", "5", "5.6") {}

string Sek5MetodyAbstrakcyjne::opisZadania() const {return "Wykorzystanie metod abstrakcyjnych";}

void Sek5MetodyAbstrakcyjne::start() {
    vector<unique_ptr<Figura>> figury;
    figury.push_back(make_unique<Kwadrat>(4.0));
    figury.push_back(make_unique<Trojkat>(3.0, 4.0, 5.0));
    figury.push_back(make_unique<Prostokat>(4.0, 6.0));
    figury.push_back(make_unique<Kolo>(3.0));

    for (const auto& figura : figury) {
        figura->wypisz();
        cout << " -> pole: " << figura->pole()
            << ", obwod: " << figura->obwod() << endl;
    }

    Kolo kolo(1.0);
    double limit = 4.0;
    cout << "Dla " << limit << " m^2 na osobe nastepna osoba moze byc w promieniu: "
        << kolo.dystans(limit) << " m" << endl;
}