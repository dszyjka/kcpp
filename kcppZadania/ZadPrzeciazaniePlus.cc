#include <iostream>

using namespace std;

class Punkt {
    private:
        int x;
        int y;

    public:
        Punkt(int x1, int y1) {
            x = x1;
            y = y1;
        }

        Punkt operator+(const Punkt& other) {
            int nowyX = this->x + other.x;
            int nowyY = this->y + other.y;

            return Punkt(nowyX, nowyY);
        }

        void print() const {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main() {
    Punkt punktA(5, 10);
    Punkt punktB(3, 4);

    cout << "=== Punkty poczatkowe ===" << endl;
    cout << "Punkt A: ";
    punktA.print();
    
    cout << "Punkt B: ";
    punktB.print();

    Punkt punktC = punktA + punktB;

    cout << "\n=== Po dodaniu ===" << endl;
    cout << "Punkt C (A, B): ";
    punktC.print();
    return 0;
}