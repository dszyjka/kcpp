#include <iostream>

using namespace std;

void OperatoryArytmetyczne() {
    int a = 17;
    int b = 5;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
}

void OperatoryPrzypisania() {
    int x = 10;

    cout << "x = " << x << endl;
    x += 5;
    cout << "x += 5: " << x << endl;
    x -= 3;
    cout << "x -= 3: " << x << endl;
    x *= 2;
    cout << "x *= 2: " << x << endl;
    x /= 4;
    cout << "x /= 4: " << x << endl;
    x %= 3;
    cout << "x %= 3: " << x << endl;
}

int main() {
    OperatoryArytmetyczne();
    cout << endl;
    OperatoryPrzypisania();

    return 0;
}
