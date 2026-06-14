#include <iostream>

using namespace std;

int main() {
    int tablica[10];

    int wartosc = 1;
    for (int* p = tablica; p < tablica + 10; ++p) {
        *p = wartosc;
        ++wartosc;
    }

    int suma = 0;
    for (int* p = tablica; p < tablica + 10; ++p) {
        suma += *p;
    }

    int* maksimum = tablica;
    for (int* p = tablica + 1; p < tablica + 10; ++p) {
        if (*p > *maksimum) {
            maksimum = p;
        }
    }

    cout << "Suma: " << suma << endl;
    cout << "Maksymalny element: " << *maksimum << endl;

    for (int* lewy = tablica, *prawy = tablica + 9; lewy < prawy; ++lewy, --prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
    }

    cout << "Tablica po odwroceniu: ";
    for (int* p = tablica; p < tablica + 10; ++p) {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
