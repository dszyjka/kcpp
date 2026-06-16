#ifndef SEK3ARYTMETYKAWSKAZNIKOWPRZESUNIECIE_H
#define SEK3ARYTMETYKAWSKAZNIKOWPRZESUNIECIE_H

#include "ZadKcpp.h"

class Sek3ArytmetykaWskaznikowPrzesuniecie: public ZadKcpp {
    public:
        Sek3ArytmetykaWskaznikowPrzesuniecie();
        void start() override;

    private:
        void przesun(int* tablica, int rozmiar) const;
        void wypisz(int* tablica, int rozmiar) const;
};

#endif