#include <iostream>

using namespace std;

bool parzystaBitowo(int liczba) {
    // Przykład: 6 & 1 = 0, więc 6 jest parzyste; 7 & 1 = 1, więc 7 jest nieparzyste.
    return (liczba & 1) == 0;
}

bool parzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

bool parzystaWarunkowo(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

void wypisz(bool wynik) {
    cout << (wynik ? "Liczba parzysta" : "Liczba nieparzysta") << endl;
}

int main() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    wypisz(parzystaBitowo(liczba));
    wypisz(parzystaModulo(liczba));
    wypisz(parzystaWarunkowo(liczba));

    return 0;
}
