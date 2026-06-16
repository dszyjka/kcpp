#ifndef SEK3ARYTMETYKAWSKAZNIKOWKOPIOWANIE_H
#define SEK3ARYTMETYKAWSKAZNIKOWKOPIOWANIE_H

#include "ZadKcpp.h"

class Sek3ArytmetykaWskaznikowKopiowanie: public ZadKcpp {
    public:
        Sek3ArytmetykaWskaznikowKopiowanie();
        void start() override;

    private:
        void kopiujTablice(int* zrodlo, int* cel, int rozmiar) const;
        void wypisz(int* tablica, int rozmiar) const;
};

#endif