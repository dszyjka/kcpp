#include <iostream>
#include <array>

using namespace std;

void modifyAndPrintCopy(array<int, 5> arrCopy) {
    cout << "Modyfikacja kopii tablicy" << endl;
    
    for (size_t i = 0; i < arrCopy.size(); ++i) {
        arrCopy[i] *= 10;
    }
    
    cout << "Elementy skopiowanej tablicy: ";
    for (int element : arrCopy) {
        cout << element << " ";
    }
    cout << "\n" << endl;
}

int main() {
    array<int, 5> originalArray = {1, 2, 3, 4, 5};

    cout << "=== Przekazywanie tablicy przez kopię ===" << endl;
    cout << "Oryginalna tablica przed wywołaniem funkcji: ";
    for (int element : originalArray) {
        cout << element << " ";
    }
    cout << "\n" << endl;

    modifyAndPrintCopy(originalArray);

    cout << "Oryginalna tablica po wywołaniu funkcji: ";
    for (int element : originalArray) {
        cout << element << " ";
    }

    return 0;
}