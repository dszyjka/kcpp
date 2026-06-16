#ifndef SEK5ZADCLASS_H
#define SEK5ZADCLASS_H

#include "ZadKcpp.h"
#include <iostream>
#include <string>

class Konto {
    public:
        std::string wlasciciel;

        Konto();
        Konto(const std::string& imie, double kwota);

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
        std::string typKonta;

        void UstawTyp(const std::string& typ) {
            typKonta = typ;
        }

    private:
        double saldo;
        int numer;

        bool PoprawnyNumer(int wartosc) const {
        return wartosc > 0;
        }
};

class KontoFirmowe : public Konto {
    public:
        void UstawJakoFirmowe() {
        UstawTyp("firmowe");
    }
};

class Sek5ZadClass: public ZadKcpp {
    public:
        Sek5ZadClass();
        void start() override;
};

#endif