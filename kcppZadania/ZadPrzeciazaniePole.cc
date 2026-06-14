#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double pole(float a) {
    return a * a;
}

double pole(double a, double b) {
    return a * b;
}

double pole(double r) {
    return PI * r * r;
}

int main() {
    float a = 10.0f;
    double b = 4;
    double r = 5;

    double kwadrat = pole(a);
    double prostokat = pole(a, b);
    double kolo = pole(r);

    cout << "Pole kwadratu" << endl;
    cout << kwadrat << endl;
    cout << "Pole prostokata" << endl;
    cout << prostokat << endl;
    cout << "Pole kola" << endl;
    cout << kolo << endl;

    return 0;
}