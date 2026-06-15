#include "../include/sek2PrzeciazaniePole.h"
#include <iostream>

using namespace std;

Sek2PrzeciazaniePole::Sek2PrzeciazaniePole(): ZadKcpp("Przeciazanie Pola", "2") {}

double Sek2PrzeciazaniePole::pole(float a) const {return a * a;}

double Sek2PrzeciazaniePole::pole(double a, double b) const {return a * b;}

double Sek2PrzeciazaniePole::pole(double r) const {return PI * r * r;}

void Sek2PrzeciazaniePole::start() {
    float a = 10.0f;
    double b = 4;
    double r = 5;

    double kwadrat = pole(a);
    double prostokat = pole(static_cast<double>(a), b);
    double kolo = pole(r);

    cout << "Pole kwadratu" << endl;
    cout << kwadrat << endl;
    cout << "Pole prostokata" << endl;
    cout << prostokat << endl;
    cout << "Pole kola" << endl;
    cout << kolo << endl;
}