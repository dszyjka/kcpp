#include <iostream>
#include <string>

using namespace std;

class Konto {
public:
  string wlasciciel;

  Konto();
  Konto(const string& imie, double kwota);

  void Wplac(double kwota) {
    if (kwota > 0) {
      saldo += kwota;
    }
  }

  void wyplac(double kwota) {
    if (kwota >= 0 && kwota <= saldo) {
      saldo -= kwota;
    }
  }

  inline double PobierzSaldo() const {
    return saldo;
  }

  void Wypisz() const;
  void ZmienNumer(int nowyNumer);

protected:
  string typKonta;

  void UstawTyp(const string& typ) {
    typKonta = typ;
  }

private:
  double saldo;
  int numer;

  bool PoprawnyNumer(int wartosc) const {
    return wartosc > 0;
  }
};

Konto::Konto() : wlasciciel("brak"), typKonta("osobiste"), saldo(0.0), numer(1) {}

Konto::Konto(const string& imie, double kwota)
    : wlasciciel(imie), typKonta("oszczednosciowe"), saldo(kwota), numer(100) {}

void Konto::Wypisz() const {
  cout << "Wlasciciel: " << wlasciciel << endl;
  cout << "Typ konta: " << typKonta << endl;
  cout << "Numer: " << numer << endl;
  cout << "Saldo: " << saldo << endl;
}

void Konto::ZmienNumer(int nowyNumer) {
  if (PoprawnyNumer(nowyNumer)) {
    numer = nowyNumer;
  }
}

class KontoFirmowe : public Konto {
public:
  void UstawJakoFirmowe() {
    UstawTyp("firmowe");
  }
};

int main() {
  Konto konto("Jan", 250.0);
  konto.Wplac(50.0);
  konto.Wypisz();
  konto.Wplac(20.0);
  konto.ZmienNumer(1234);
  konto.Wypisz();

  cout << "Saldo odczytane funkcja inline: " << konto.PobierzSaldo() << endl;

  KontoFirmowe firma;
  firma.wlasciciel = "Januszex sp. z.o.o";
  firma.UstawJakoFirmowe();
  firma.Wplac(1000.0);
  firma.Wypisz();

  return 0;
}
