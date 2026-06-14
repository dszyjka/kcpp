#include <iostream>

using namespace std;

int main() {
    int tablica[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* pierwszy = tablica + 2;
    int* drugi = tablica + 7;

    cout << "Adres pierwszego wskaznika: " << pierwszy << endl;
    cout << "Adres drugiego wskaznika: " << drugi << endl;
    cout << "Roznica wskaznikow: " << drugi - pierwszy << endl;

    return 0;
}
