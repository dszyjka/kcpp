#include <iostream>
using namespace std;

long long obliczSilnie(int liczba) {
  long long silnia = 1;

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
  }

  return silnia;
}

int main() {
  int liczba;
  long long suma = 0;

  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  if (liczba < 0) {
    cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych." << endl;
    return 1;
  }

  cout << "Silnia z " << liczba << " wynosi: " << obliczSilnie(liczba) << endl;

  for (int i = 1; i <= liczba; i++) {
    suma += obliczSilnie(i);
  }

  cout << "Suma silni od 1 do " << liczba << " wynosi: " << suma << endl;

  return 0;
}
