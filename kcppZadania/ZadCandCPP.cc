#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

void przykladC() {
    int a = 8;
    int b = 3;
    int tablica[3] = {1, 2, 3};

    printf("C: a + b = %d\n", a + b);
    printf("C: a / b = %.2f\n", (double)a / b);
    printf("C: tablica = ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", tablica[i]);
    }
    printf("\n");
}

void przykladCPP() {
    int a = 8;
    int b = 3;
    int tablica[3] = {1, 2, 3};

    cout << "C++: a + b = " << a + b << endl;
    cout << "C++: a / b = " << static_cast<double>(a) / b << endl;
    cout << "C++: tablica = ";
    for (int element : tablica) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    przykladC();
    przykladCPP();

    return 0;
}
