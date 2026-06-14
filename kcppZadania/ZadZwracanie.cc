#include <iostream>

using namespace std;

int returnVal(int a, int b) {
    return a + b;
}

int& returnRef(int& a, int b) {
    a += b;
    return a;
}

int* returnPointer(int* a, int b) {
    *a += b;
    return a;
}

int* returnArr(int a) {
    int* arr = new int[a];

    for (int i = 0; i < a; i++) {
        arr[i] = i;
    }

    return arr;
}

int main() {
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

    return 0;
}