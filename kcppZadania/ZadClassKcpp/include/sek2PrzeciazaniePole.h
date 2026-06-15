#ifndef SEK2PRZECIAZANIEPOLE_H
#define SEK2PRZECIAZANIEPOLE_H

#include "ZadKcpp.h"


class Sek2PrzeciazaniePole: public ZadKcpp {
    public:
        Sek2PrzeciazaniePole();
        void start() override;
        
    private:
        const double PI = 3.14;

        double pole(float a) const;
        double pole(double a, double b) const;
        double pole(double r) const;
};

#endif