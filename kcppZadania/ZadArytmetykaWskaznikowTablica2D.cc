#include <iostream>

using namespace std;

int main() {
    int tab[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int (*wiersz)[3] = tab; wiersz < tab + 3; ++wiersz) {
        for (int* element = *wiersz; element < *wiersz + 3; ++element) {
            cout << "Wartosc: " << *element << ", adres: " << element << endl;
        }
    }

    return 0;
}
