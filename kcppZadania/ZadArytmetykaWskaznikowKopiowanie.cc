#include <iostream>

using namespace std;

void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {
    for (int* p = zrodlo, *q = cel; p < zrodlo + rozmiar; ++p, ++q) {
        *q = *p;
    }
}

void wypisz(int* tablica, int rozmiar) {
    for (int* p = tablica; p < tablica + rozmiar; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

int main() {
    int pierwsza[] = {3, 6, 9, 12, 15};
    int druga[5];
    int rozmiar = sizeof(pierwsza) / sizeof(pierwsza[0]);

    kopiujTablice(pierwsza, druga, rozmiar);

    cout << "Tablica zrodlowa: ";
    wypisz(pierwsza, rozmiar);

    cout << "Tablica skopiowana: ";
    wypisz(druga, rozmiar);

    return 0;
}
