#include <cstring>
#include <iostream>

using namespace std;

union Dane {
  int liczba;
  float rzeczywista;
  char tekst[8];
};

int main() {
  Dane dane;

  dane.liczba = 65;
  cout << "Po zapisaniu int: " << dane.liczba << endl;

  dane.rzeczywista = 3.14f;
  cout << "Po zapisaniu float: " << dane.rzeczywista << endl;
  cout << "Odczyt int z tych samych bajtow daje nieczytelny wynik: "
       << dane.liczba << endl;

  strcpy(dane.tekst, "ABC");
  cout << "Po zapisaniu tekstu: " << dane.tekst << endl;
  cout << "Odczyt float po zmianie pola unii jest bledny: "
       << dane.rzeczywista << endl;

  cout << "Unia przechowuje tylko jedna aktywna wartosc naraz." << endl;

  return 0;
}
