#include "../include/ZadKcpp.h"

using namespace std;

ZadKcpp::ZadKcpp(const string& nazwa, const string& sek, const string& numerWSekcji): 
    nazwaZad(nazwa), sekcja(sek), numerZadWSekcji(numerWSekcji) {}

ZadKcpp::~ZadKcpp() {};

string ZadKcpp::pobierzNazwe() const {return nazwaZad;}
string ZadKcpp::pobierzSekcje() const {return sekcja;}
string ZadKcpp::pobierzNumerZadWSekcji() const {return numerZadWSekcji;}