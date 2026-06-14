#include <iostream>
#include <string>

using namespace std;

enum Wybor {
    BITOWO,
    MODULO,
    WARUNKOWO,
    NIEZNANY
};

Wybor zamienNaWybor(const string& slowo) {
    if (slowo == "bitowo") {
        return BITOWO;
    }
    if (slowo == "modulo") {
        return MODULO;
    }
    if (slowo == "warunkowo") {
        return WARUNKOWO;
    }
    return NIEZNANY;
}

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
    string wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podaj sposob (bitowo, modulo, warunkowo): ";
    cin >> wybor;

    switch (zamienNaWybor(wybor)) {
        case BITOWO:
            wypisz(parzystaBitowo(liczba));
            break;
        case MODULO:
            wypisz(parzystaModulo(liczba));
            break;
        case WARUNKOWO:
            wypisz(parzystaWarunkowo(liczba));
            break;
        default:
            cout << "Nie da sie bezposrednio uzyc string w switch w standardowym C++." << endl;
            break;
    }

    return 0;
}
