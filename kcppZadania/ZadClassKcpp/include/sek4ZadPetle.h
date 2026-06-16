#ifndef SEK4ZADPETLE_H
#define SEK4ZADPETLE_H

#include "ZadKcpp.h"

class Sek4ZadPetle: public ZadKcpp {
    public:
        Sek4ZadPetle();
        void start() override;
        string opisZadania() const override;

    private:
        void petlaWhile() const;
        void petlaDoWhile() const;
        int petlaFor() const;
};

#endif