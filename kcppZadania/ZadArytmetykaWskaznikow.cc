#include <iostream>

using namespace std;

void wypiszStan(int numer, int a, int b, int c) {
    cout << numer << ". A, B, C: " << a << " " << b << " " << c << endl;
}

void Funkcja1() {
    int tablica[] = {10, 20, 30, 40, 50};
    int* p = tablica;

    cout << "Start: p wskazuje na " << *p << endl;
    p++;
    cout << "p++: " << *p << endl;
    ++p;
    cout << "++p: " << *p << endl;
    ++*p;
    cout << "++*p: " << *p << endl;
    ++(*p);
    cout << "++(*p): " << *p << endl;
    ++*(p);
    cout << "++*(p): " << *p << endl;

    p = tablica;
    int odczyt = *p++;
    cout << "*p++: " << odczyt << ", teraz p wskazuje na " << *p << endl;

    p = tablica;
    (*p)++;
    cout << "(*p)++: " << *p << endl;

    p = tablica;
    odczyt = *(p)++;
    cout << "*(p)++: " << odczyt << ", teraz p wskazuje na " << *p << endl;

    p = tablica;
    cout << "*++p: " << *++p << endl;

    p = tablica;
    cout << "*(++p): " << *(++p) << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* p = &a;

    wypiszStan(1, a, b, c);

    p = &b;
    *p = 10;
    wypiszStan(2, a, b, c);

    p = &c;
    *p = 20;
    wypiszStan(3, a, b, c);

    p = &b;
    *p = 30;
    wypiszStan(4, a, b, c);

    p = &a;
    *p = 40;
    wypiszStan(5, a, b, c);

    p = &b;
    *p = 50;
    wypiszStan(6, a, b, c);

    p = &c;
    *p = 60;
    wypiszStan(7, a, b, c);

    p = &b;
    *p = 70;
    wypiszStan(8, a, b, c);

    p = &a;
    *p = 80;
    wypiszStan(9, a, b, c);

    p = &b;
    *p = 90;
    wypiszStan(10, a, b, c);
}

int main() {
    Funkcja1();
    cout << endl;
    Funkcja2();

    return 0;
}
