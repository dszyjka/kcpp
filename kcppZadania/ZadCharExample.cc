// LChar.cc
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char text1[50] = "Programming";
    char text2[50] = " in C++";
    char copy[50];

    cout << "Length of text1: "
         << strlen(text1) << endl;

    strcpy(copy, text1);
    cout << "Copied string: "
         << copy << endl;

    strcat(text1, text2);
    cout << "Concatenated string: "
         << text1 << endl;

    if (strcmp(text1, copy) == 0)
        cout << "Strings are equal." << endl;
    else
        cout << "Strings are different." << endl;

    return 0;
}