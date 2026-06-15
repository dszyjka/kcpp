#ifndef SEK2ZWRACANIE_H
#define SEK2ZWRACANIE_H

#include "ZadKcpp.h"

class Sek2Zwracanie: public ZadKcpp {
    public:
        Sek2Zwracanie();
        void start() override;

    private:
        int returnVal(int a, int b);
        int& returnRef(int& a, int b);
        int* returnPointer(int* a, int b);
        int* returnArr(int a);
};

#endif