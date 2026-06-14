#include <iostream>
#include <string>

using namespace std;

#define WERSJA 4
#define KWADRAT(x) ((x) * (x))
#define TEKST(x) #x
#define POLACZ(a, b) a##b

int kwadratBezMakra(int x) {
    return x * x;
}

string tekstBezMakra(const string& tekst) {
    return tekst;
}

int main() {
#ifdef WERSJA
    cout << "WERSJA jest zdefiniowana: " << WERSJA << endl;
#else
    cout << "WERSJA nie jest zdefiniowana" << endl;
#endif

#ifndef TRYB_TESTOWY
    cout << "TRYB_TESTOWY nie jest zdefiniowany" << endl;
#else
    cout << "TRYB_TESTOWY jest zdefiniowany" << endl;
#endif

    int liczba = 5;
    int POLACZ(wynik, Makra) = KWADRAT(liczba);
    int wynikFunkcji = kwadratBezMakra(liczba);

    cout << "Makro KWADRAT: " << wynikMakra << endl;
    cout << "Funkcja kwadratBezMakra: " << wynikFunkcji << endl;
    cout << "Operator # w makrze: " << TEKST(liczba + 10) << endl;
    cout << "Bez makra #: " << tekstBezMakra("liczba + 10") << endl;

    return 0;
}
