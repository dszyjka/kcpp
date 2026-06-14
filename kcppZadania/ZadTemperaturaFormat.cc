#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    cout << right << setw(8) << "Celsjusz" << setw(14) << "Fahrenheit" << endl;
    cout << setw(8) << "-------" << setw(14) << "---------" << endl;

    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << setw(8) << c << setw(14) << fixed << setprecision(2) << f << endl;
    }

    return 0;
}
