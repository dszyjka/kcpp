#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

string center(const string& tekst, int szerokosc) {
    if (static_cast<int>(tekst.size()) >= szerokosc) {
        return tekst;
    }

    int lewa = (szerokosc - static_cast<int>(tekst.size())) / 2;
    int prawa = szerokosc - static_cast<int>(tekst.size()) - lewa;
    return string(lewa, ' ') + tekst + string(prawa, ' ');
}

void wiersz(const string& nazwa, double wartosc) {
    cout << left << setw(15) << nazwa;
    cout << right << setw(20) << setprecision(6) << defaultfloat << wartosc;
    cout << setw(20) << fixed << setprecision(6) << wartosc;
    cout << setw(20) << scientific << setprecision(6) << wartosc << endl;
}

int main() {
    cout << center("Stala", 15)
         << center("Wartosc (domyslnie)", 20)
         << center("Notacja stala", 20)
         << center("Notacja naukowa", 20) << endl;
    cout << left << setw(15) << "--------"
         << setw(20) << "-----------------"
         << setw(20) << "-------------"
         << setw(20) << "--------------" << endl;

    wiersz("Pi", 3.141592653589793);
    wiersz("e", 2.718281828459045);
    wiersz("Zloty podzial", 1.618033988749895);

    return 0;
}
