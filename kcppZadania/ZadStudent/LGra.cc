#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  srand(time(0));

  int poziom, zakres;
  cout << "Wybierz poziom trudnosci: 1 - latwy (1-50), 2 - trudny (1-200): ";
  cin >> poziom;

  if (poziom == 1) {
    zakres = 50;
  } else {
    zakres = 200;
  }

  int wylosowana = rand() % zakres + 1;
  int proba;
  const int maksProb = 10;

  cout << "Zgadnij liczbe (1-" << zakres << "). Masz " << maksProb << " prob." << endl;

  for (int licznik = 1; licznik <= maksProb; licznik++) {
    cin >> proba;

    if (proba < wylosowana) {
      cout << "Za malo!" << endl;
    } else if (proba > wylosowana) {
      cout << "Za duzo!" << endl;
    } else {
      cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
      return 0;
    }
  }

  cout << "Nie zgadles. Prawidlowa liczba to: " << wylosowana << endl;

  return 0;
}
