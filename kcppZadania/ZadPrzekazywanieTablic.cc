#include <iostream>

using namespace std;

template <typename DataType, size_t ArraySize>
void printArray(DataType (&arr)[ArraySize]) {
    cout << "Przekazany rozmiar tablicy: " << ArraySize << endl;
    cout << "Elementy: ";
    
    for (size_t i = 0; i < ArraySize; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;
}

int main() {
    int numbersArray[] = {10, 20, 30, 40, 50};
    double floatsArray[] = {3.14, 1.61, 2.71};

    cout << "numbersArray:" << endl;
    printArray(numbersArray);

    cout << "floatsArray:" << endl;
    printArray(floatsArray);

    return 0;
}