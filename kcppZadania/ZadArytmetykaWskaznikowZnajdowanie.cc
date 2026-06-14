#include <iostream>

using namespace std;

int* maxElement(int* tablica, int rozmiar) {
    if (rozmiar <= 0) {
        return nullptr;
    }

    int* maksimum = tablica;

    for (int* p = tablica + 1; p < tablica + rozmiar; ++p) {
        if (*p > *maksimum) {
            maksimum = p;
        }
    }

    return maksimum;
}

int main() {
    int liczby[] = {4, 17, 2, 29, 8, 11};
    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);
    int* wynik = maxElement(liczby, rozmiar);

    if (wynik != nullptr) {
        cout << "Najwiekszy element: " << *wynik << endl;
        cout << "Adres najwiekszego elementu: " << wynik << endl;
    }

    return 0;
}
