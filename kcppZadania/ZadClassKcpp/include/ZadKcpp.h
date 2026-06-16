#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <string>

using namespace std;

class ZadKcpp {
    public:
        ZadKcpp(const string& nazwa, const string& sekcjaZad);
        virtual ~ZadKcpp();

        virtual void start() = 0;
        virtual string opisZadania() const = 0;
        string pobierzNazwe() const;
        string pobierzSekcje() const;

    protected:
        string nazwaZad;
        string sekcja;
};

#endif