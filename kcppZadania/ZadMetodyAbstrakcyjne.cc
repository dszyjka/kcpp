#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

const double PI = 3.14;

class Figura {
public:
  virtual ~Figura() = default;
  virtual double pole() const = 0;
  virtual double obwod() const = 0;
  virtual void wypisz() const = 0;
};

class Kwadrat : public Figura {
public:
  explicit Kwadrat(double bok) : bok(bok) {}

  double pole() const override {
    return bok * bok;
  }

  double obwod() const override {
    return 4.0 * bok;
  }

  void wypisz() const override {
    cout << "Kwadrat, bok: " << bok;
  }

private:
  double bok;
};

class Trojkat : public Figura {
public:
  Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

  double pole() const override {
    double p = obwod() / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
  }

  double obwod() const override {
    return a + b + c;
  }

  void wypisz() const override {
    cout << "Trojkat, boki: " << a << ", " << b << ", " << c;
  }

private:
  double a;
  double b;
  double c;
};

class Prostokat : public Figura {
public:
  Prostokat(double szerokosc, double wysokosc)
      : szerokosc(szerokosc), wysokosc(wysokosc) {}

  double pole() const override {
    return szerokosc * wysokosc;
  }

  double obwod() const override {
    return 2.0 * (szerokosc + wysokosc);
  }

  void wypisz() const override {
    cout << "Prostokat, boki: " << szerokosc << ", " << wysokosc;
  }

private:
  double szerokosc;
  double wysokosc;
};

class Kolo : public Figura {
public:
  explicit Kolo(double promien) : promien(promien) {}

  double pole() const override {
    return PI * promien * promien;
  }

  double obwod() const override {
    return 2.0 * PI * promien;
  }

  double dystans(double metryKwadratoweNaOsobe) const {
    if (metryKwadratoweNaOsobe <= 0.0) {
      return 0.0;
    }
    return sqrt(metryKwadratoweNaOsobe / PI);
  }

  void wypisz() const override {
    cout << "Kolo, promien: " << promien;
  }

private:
  double promien;
};

int main() {
  vector<unique_ptr<Figura>> figury;
  figury.push_back(make_unique<Kwadrat>(4.0));
  figury.push_back(make_unique<Trojkat>(3.0, 4.0, 5.0));
  figury.push_back(make_unique<Prostokat>(4.0, 6.0));
  figury.push_back(make_unique<Kolo>(3.0));

  for (const auto& figura : figury) {
    figura->wypisz();
    cout << " -> pole: " << figura->pole()
         << ", obwod: " << figura->obwod() << endl;
  }

  Kolo kolo(1.0);
  double limit = 4.0;
  cout << "Dla " << limit << " m^2 na osobe nastepna osoba moze byc w promieniu: "
       << kolo.dystans(limit) << " m" << endl;

  return 0;
}
