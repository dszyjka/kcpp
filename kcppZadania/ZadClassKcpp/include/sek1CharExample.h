#ifndef SEK1CHAREXAMPLE_H
#define SEK1CHAREXAMPLE_H

#include "ZadKcpp.h"

class Sek1CharExample : public ZadKcpp {
    public:
        Sek1CharExample();
        void start() override;
        string opisZadania() const override;
};

#endif