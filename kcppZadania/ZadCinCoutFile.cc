#include <iostream>
#include <string>

using namespace std;

int main() {
    string imie;
    int wiek;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj wiek: ";
    cin >> wiek;

    if (wiek < 0) {
        cerr << "Blad: wiek nie moze byc ujemny." << endl;
        return 1;
    }

    cout << "Witaj, " << imie << ". Masz " << wiek << " lat." << endl;
    cerr << "Komunikat diagnostyczny: program zakonczyl dzialanie poprawnie." << endl;

    return 0;
}
