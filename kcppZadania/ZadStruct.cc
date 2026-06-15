#include <iostream>
#include <string>

using namespace std;

struct Produkt {
  string nazwa;
  double cena;
  int ilosc;

  Produkt() : nazwa("brak"), cena(0.0), ilosc(0) {}
  Produkt(const string& n, double c, int i) : nazwa(n), cena(c), ilosc(i) {}

  double Wartosc() const {
    return cena * ilosc;
  }
};

void Wypisz(const Produkt& produkt) {
  cout << produkt.nazwa << ", cena: " << produkt.cena
       << ", ilosc: " << produkt.ilosc
       << ", wartosc: " << produkt.Wartosc() << endl;
}

int main() {
  Produkt domyslny;
  Produkt chleb = {"Chleb", 4.99, 5};
  Produkt mleko("Mleko", 3.20, 10);

  Wypisz(domyslny);
  Wypisz(chleb);
  Wypisz(mleko);

  chleb.ilosc = 8;
  chleb.cena = 5.49;

  cout << "Po zmianie wartosci:" << endl;
  Wypisz(chleb);
  cout << "Odczyt nazwy: " << chleb.nazwa << endl;

  return 0;
}
