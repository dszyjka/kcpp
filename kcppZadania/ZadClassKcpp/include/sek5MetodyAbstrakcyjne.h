#ifndef SEK5METODYABSTRAKCYJNE_H
#define SEK5METODYABSTRAKCYJNE_H

#include "ZadKcpp.h"

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
  explicit Kwadrat(double bok);

  double pole() const override;
  double obwod() const override;
  void wypisz() const override;

private:
  double bok;
};

class Trojkat : public Figura {
public:
  Trojkat(double a, double b, double c);

  double pole() const override;
  double obwod() const override;
  void wypisz() const override;

private:
  double a;
  double b;
  double c;
};

class Prostokat : public Figura {
public:
  Prostokat(double szerokosc, double wysokosc);

  double pole() const override;
  double obwod() const override;
  void wypisz() const override;

private:
  double szerokosc;
  double wysokosc;
};

class Kolo : public Figura {
public:
  explicit Kolo(double promien);

  double pole() const override;
  double obwod() const override;
  double dystans(double metryKwadratoweNaOsobe) const;
  void wypisz() const override;

private:
  double promien;
};

class Sek5MetodyAbstrakcyjne : public ZadKcpp {
public:
    Sek5MetodyAbstrakcyjne();
    void start() override;
    string opisZadania() const override;
};

#endif