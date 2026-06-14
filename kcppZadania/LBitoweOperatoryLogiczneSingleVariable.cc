#include <iostream>

using namespace std;

int utworzLiczbe(int* bity, int rozmiar) {
    int wynik = 0;

    for (int* p = bity; p < bity + rozmiar; ++p) {
        wynik <<= 1;
        wynik |= *p;
    }

    return wynik;
}

int main() {
    const int rozmiar = 8;
    int bity[rozmiar];

    cout << "Podaj 8 wartosci 0 lub 1: ";
    for (int* p = bity; p < bity + rozmiar; ++p) {
        cin >> *p;
        if (*p != 0 && *p != 1) {
            cout << "Niepoprawna wartosc." << endl;
            return 1;
        }
    }

    int liczba = utworzLiczbe(bity, rozmiar);

    cout << "Liczba dziesietnie: " << liczba << endl;
    cout << "Liczba binarnie: ";
    for (int* p = bity; p < bity + rozmiar; ++p) {
        cout << *p;
    }
    cout << endl;

    return 0;
}
