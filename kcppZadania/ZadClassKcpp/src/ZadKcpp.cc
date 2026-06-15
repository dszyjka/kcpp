#include "../include/ZadKcpp.h"

using namespace std;

ZadKcpp::ZadKcpp(const string& nazwa, const string& sek): nazwaZad(nazwa), sekcja(sek) {}
ZadKcpp::~ZadKcpp() {};

string ZadKcpp::pobierzNazwe() const {return nazwaZad;}
string ZadKcpp::pobierzSekcje() const {return sekcja;}