#include <iostream>
#include <string>

using namespace std;

class Samochod {
public:
  Samochod() {
    marka = "brak";
    rok = 0;
    przebieg = 0.0;
  }

  Samochod(const string& m, int r, double p) : marka(m), rok(r), przebieg(p) {}

  ~Samochod() = default;

  void Wypisz() const {
    cout << marka << ", rok: " << rok << ", przebieg: " << przebieg << endl;
  }

private:
  string marka;
  int rok;
  double przebieg;
};

int main() {
  Samochod domyslny;
  Samochod fiat("Fiat", 2010, 125000.5);

  domyslny.Wypisz();
  fiat.Wypisz();

  return 0;
}
