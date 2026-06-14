#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void wiersz(const string& nazwa, double cena, int ilosc) {
    cout << "| " << left << setw(15) << nazwa
         << "| " << right << setw(8) << fixed << setprecision(2) << cena
         << "| " << right << setw(7) << ilosc << " |" << endl;
}

int main() {
    cout << "| " << left << setw(15) << "Nazwa"
         << "| " << setw(8) << "Cena"
         << "| " << setw(7) << "Ilosc" << " |" << endl;
    cout << "|" << setw(16) << setfill('-') << ""
         << "|" << setw(9) << ""
         << "|" << setw(9) << "" << "|" << setfill(' ') << endl;

    wiersz("Chleb", 4.99, 5);
    wiersz("Mleko", 3.20, 10);
    wiersz("Jajka (10 szt)", 8.50, 3);

    return 0;
}
