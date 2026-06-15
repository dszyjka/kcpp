#include "../include/sek2Zwracanie.h"
#include <iostream>

using namespace std;

Sek2Zwracanie::Sek2Zwracanie(): ZadKcpp("zwracanie", "2") {}

int Sek2Zwracanie::returnVal(int a, int b) {return a + b;}

int& Sek2Zwracanie::returnRef(int& a, int b) {
    a += b;
    return a;
}

int* Sek2Zwracanie::returnPointer(int* a, int b) {
    *a += b;
    return a;
}

int* Sek2Zwracanie::returnArr(int a) {
    int* arr = new int[a];

    for (int i = 0; i < a; i++) {
        arr[i] = i;
    }

    return arr;
}

void Sek2Zwracanie::start() {
    int a = 10;
    int b = 20;
    int* arr = returnArr(a);

    cout << "Przez wartosc" << endl;
    cout << returnVal(a, b) << endl;
    cout << "Przez referencje" << endl;
    cout << returnRef(a, b) << endl;
    cout << "Przez wskaznik" << endl;
    cout << returnPointer(&a, b) << endl;
    cout << "Przez tablice" << endl;
    cout << arr << endl;

    delete[] arr;
}