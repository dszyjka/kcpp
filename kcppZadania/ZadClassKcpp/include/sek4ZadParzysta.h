#ifndef SEK4ZADPARZYSTA_H
#define SEK4ZADPARZYSTA_H

#include "ZadKcpp.h"

class Sek4ZadParzysta: public ZadKcpp {
    public:
        Sek4ZadParzysta();
        void start() override;

    private:
        bool parzystaBitowo(int liczba) const;
        bool parzystaModulo(int liczba) const;
        bool parzystaWarunkowo(int liczba) const;
        void wypisz(bool wynik) const;
};

#endif