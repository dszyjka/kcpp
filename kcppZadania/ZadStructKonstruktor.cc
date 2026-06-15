#include <iostream>
#include <string>

using namespace std;

struct Ksiazka {
  string tytul;
  string autor;
  int strony;

  Ksiazka() {
    tytul = "brak";
    autor = "brak";
    strony = 0;
  }

  Ksiazka(const string& t, const string& a, int s) : tytul(t), autor(a), strony(s) {}

  ~Ksiazka() = default;

  void Wypisz() const {
    cout << "\"" << tytul << "\", autor: " << autor
         << ", strony: " << strony << endl;
  }
};

int main() {
  Ksiazka domyslna;
  Ksiazka cpp("C++ podstawy", "Jan Kowalski", 240);

  domyslna.Wypisz();
  cpp.Wypisz();

  return 0;
}
