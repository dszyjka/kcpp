#include <iostream>
#include <cmath>

using namespace std;

int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; ++i) {
        wynik *= podstawa;
    }
    return wynik;
}

double potega(double podstawa, int wykladnik) {
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

int main() {
    int a = 4;
    double b = 5.5;
    int c = 2;

    cout << "Dla liczby calkowitej: " << potega(a, c) << endl;
    cout << "Dla liczby zmiennoprzecinkowej: " << potega(b, c) << endl;
    return 0;
}