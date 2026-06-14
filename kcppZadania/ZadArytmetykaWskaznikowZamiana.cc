#include <iostream>

using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    cout << "Podaj dwie liczby: ";
    cin >> x >> y;

    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "Po zamianie: x = " << x << ", y = " << y << endl;

    return 0;
}
