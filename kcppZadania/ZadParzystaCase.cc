#include <iostream>

using namespace std;

bool parzystaBitowo(int liczba) {
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
    int wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "1 - bitowo, 2 - modulo, 3 - operator warunkowy: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            wypisz(parzystaBitowo(liczba));
            break;
        case 2:
            wypisz(parzystaModulo(liczba));
            break;
        case 3:
            wypisz(parzystaWarunkowo(liczba));
            break;
        default:
            cout << "Niepoprawny wybor." << endl;
            break;
    }

    return 0;
}
