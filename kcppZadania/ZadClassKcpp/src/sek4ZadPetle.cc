#include "../include/sek4ZadPetle.h"
#include <iostream>

using namespace std;

Sek4ZadPetle::Sek4ZadPetle(): ZadKcpp("Zad Petle", "4") {}

void Sek4ZadPetle::petlaWhile() const {
    int i = 0;

    while (i < 10) {
        if (i == 3) {
            i++;
            continue;
        }
        if (i == 8) {
            break;
        }
        cout << "while i++: " << i++ << endl;
    }

    i = 0;
    while (i < 3) {
        cout << "while ++i: " << ++i << endl;
    }
}

void Sek4ZadPetle::petlaDoWhile() const{
    int i = 0;

    do {
        if (i == 2) {
            i++;
            continue;
        }
        cout << "do-while i++: " << i++ << endl;
    } while (i < 5);

    i = 0;
    do {
        cout << "do-while ++i: " << ++i << endl;
    } while (i < 3);
}

int Sek4ZadPetle::petlaFor() const {
    for (int i = 0; i < 10; ++i) {
        if (i == 4) {
            continue;
        }
        if (i == 7) {
            return i;
        }
        cout << "for: " << i << endl;
    }

    return -1;
}

void Sek4ZadPetle::start() {
    petlaWhile();
    petlaDoWhile();
    cout << "return z petli for: " << petlaFor() << endl;
}