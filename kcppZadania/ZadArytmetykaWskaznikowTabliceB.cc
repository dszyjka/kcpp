#include <iostream>

using namespace std;

void wypisz(double* tablica, int rozmiar) {
    for (double* p = tablica; p < tablica + rozmiar; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

int main() {
    const int rozmiar = 5;
    double pierwsza[rozmiar];
    double druga[rozmiar];
    double trzecia[rozmiar];

    cout << "Podaj 5 liczb: ";
    for (double* p = pierwsza; p < pierwsza + rozmiar; ++p) {
        cin >> *p;
    }

    for (double* p = pierwsza, *q = druga; p < pierwsza + rozmiar; ++p, ++q) {
        *q = *p * 2;
    }

    for (double* p = pierwsza, *q = druga, *r = trzecia; p < pierwsza + rozmiar; ++p, ++q, ++r) {
        *r = *p + *q;
    }

    cout << "Pierwsza tablica: ";
    wypisz(pierwsza, rozmiar);

    cout << "Druga tablica: ";
    wypisz(druga, rozmiar);

    cout << "Trzecia tablica: ";
    wypisz(trzecia, rozmiar);

    return 0;
}
