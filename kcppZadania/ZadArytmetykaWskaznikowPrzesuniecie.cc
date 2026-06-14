#include <iostream>

using namespace std;

void przesun(int* tablica, int rozmiar) {
    if (rozmiar <= 1) {
        return;
    }

    int ostatni = *(tablica + rozmiar - 1);

    for (int* p = tablica + rozmiar - 1; p > tablica; --p) {
        *p = *(p - 1);
    }

    *tablica = ostatni;
}

void wypisz(int* tablica, int rozmiar) {
    for (int* p = tablica; p < tablica + rozmiar; ++p) {
        cout << *p << " ";
    }
    cout << endl;
}

int main() {
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "Przed przesunieciem: ";
    wypisz(liczby, rozmiar);

    przesun(liczby, rozmiar);

    cout << "Po przesunieciu: ";
    wypisz(liczby, rozmiar);

    return 0;
}
