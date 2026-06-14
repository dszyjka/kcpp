#include <iostream>
#include <string>

using namespace std;

int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

string dodaj(string a, string b) {
    return a + b;
}

int main() {
    int numA = 222;
    int numB = 444;
    double d1 = 21.2;
    double d2 = 33.3;
    string word1 = "first";
    string word2 = "Second";

    cout << dodaj(numA, numB) << endl;
    cout << dodaj(d1, d2) << endl;
    cout << dodaj(word1, word2) << endl;

    return 0;
}