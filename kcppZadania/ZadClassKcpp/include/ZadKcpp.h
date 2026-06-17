#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <string>

class ZadKcpp {
    public:
        ZadKcpp(const std::string& nazwa, const std::string& sekcjaZad, const std::string& numerWSekcji);
        virtual ~ZadKcpp();

        virtual void start() = 0;
        virtual std::string opisZadania() const = 0;
        std::string pobierzNazwe() const;
        std::string pobierzSekcje() const;
        std::string pobierzNumerZadWSekcji() const;

    protected:
        std::string nazwaZad;
        std::string sekcja;
        std::string numerZadWSekcji;
};

#endif