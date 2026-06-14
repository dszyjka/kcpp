#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double a = 10.0 / 3.0;
    double b = 25.0 / 2.0;
    double c = 7.0 / 4.0;
    double d = 128.0 / 9.0;
    double t1 = 5.0 / 3.0;
    double t2 = 99.0 / 8.0;
    double t3 = 123.0 / 7.0;
    double average = (b + c + d) / 3.0;
    int liczba = 255;

    cout << setfill('=') << setw(50) << "" << setfill(' ') << endl;
    cout << "Wynika naszego dzialania: " << fixed << setprecision(5) << a << " jest niepoprawny ale:" << endl;
    cout << setw(12) << right << "output:" << setw(9) << fixed << setprecision(3) << b << setw(7) << "T:" << setw(8) << fixed << setprecision(3) << t1 << endl;
    cout << setw(12) << right << "output1:" << setw(9) << fixed << setprecision(4) << c << setw(7) << "T:" << setw(9) << fixed << setprecision(5) << t2 << endl;
    cout << setw(12) << right << "output2:" << setw(9) << fixed << setprecision(4) << d << setw(7) << "T:" << setw(10) << fixed << setprecision(6) << t3 << endl;
    cout << setw(31) << setfill('-') << "" << setfill(' ') << endl;
    cout << setw(12) << right << "average:" << setw(9) << fixed << setprecision(4) << average << setw(7) << "T:" << setw(10) << fixed << setprecision(6) << (t1 + t2 + t3) / 3.0 << endl;
    cout << setfill('=') << setw(50) << "" << setfill(' ') << endl;
    
    return 0;
}
