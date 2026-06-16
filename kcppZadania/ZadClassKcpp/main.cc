#include "include/ZadKcpp.h"
#include "include/sek1CharExample.h"
#include "include/sek1StringExample.h"
#include "include/sek2PrzeciazaniePole.h"
#include "include/sek2Zwracanie.h"
#include "include/sek3ArytmetykaWskaznikowKopiowanie.h"
#include "include/sek3ArytmetykaWskaznikowPrzesuniecie.h"
#include "include/sek4ZadParzysta.h"
#include "include/sek4ZadPetle.h"
#include "include/sek5MetodyAbstrakcyjne.h"
#include "include/sek5ZadClass.h"
#include <iostream>

using namespace std;

void menu() {}

int main() {
    ZadKcpp* zadania[] = {
        new Sek1CharExample(),
        new Sek1StringExample(),
        new Sek2PrzeciazaniePole(),
        new Sek2Zwracanie(),
        new Sek3ArytmetykaWskaznikowKopiowanie(),
        new Sek3ArytmetykaWskaznikowPrzesuniecie(),
        new Sek4ZadParzysta(),
        new Sek4ZadPetle(),
        new Sek5ZadClass(),
        new Sek5MetodyAbstrakcyjne()
    };

    int wybraneZadanie;
}