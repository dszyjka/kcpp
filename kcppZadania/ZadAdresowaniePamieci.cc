#include <iostream>

using namespace std;

// ==============================================================================
// 1. Każda zmienna zajmuje określone miejsce w pamięci operacyjnej komputera (RAM).
// 2. Unikalny operator „&” (operator adresu) zwraca adres pamięci danej zmiennej.
// 3. Zmienne lokalne w funkcjach są automatycznie alokowane na tzw. stosie (stack).
// 4. Stos rośnie w kierunku adresów niższych (w dół), przez co każda kolejna
//    zadeklarowana zmienna lokalna zazwyczaj otrzymuje mniejszy adres w pamięci.
// ==============================================================================


int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    double d = 4.5;
    char e = 'x';

    cout << "Adres a: " << &a << endl;
    cout << "Adres b: " << &b << endl;
    cout << "Adres c: " << &c << endl;
    cout << "Adres d: " << &d << endl;
    cout << "Adres e: " << static_cast<void*>(&e) << endl;

    return 0;
}
