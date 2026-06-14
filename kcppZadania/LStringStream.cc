#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string dane = "Jan 21 4.75";
    string imie;
    int wiek;
    double srednia;

    stringstream ss(dane);
    ss >> imie >> wiek >> srednia;

    stringstream wynik;
    wynik << "Imie: " << imie << ", wiek: " << wiek << ", srednia: " << srednia;

    cout << wynik.str() << endl;

    return 0;
}
