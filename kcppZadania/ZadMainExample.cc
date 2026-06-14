#include <iostream>
#include <string>

using namespace std;

void function1() {
    cout << "-> [C++] Executed: function1" << endl;
}

void function2() {
    cout << "-> [C++] Executed: function2" << endl;
}

void function3() {
    cout << "-> [C++] Executed: function3" << endl;
}

extern "C" void functionC1() {
    cout << "-> [extern \"C\"] Executed: functionC1" << endl;
}

extern "C" void functionC2() {
    cout << "-> [extern \"C\"] Executed: functionC2" << endl;
}

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cout << "No arguments provided! Please specify which functions to run." << endl;
        cout << "Usage: " << argv[0] << " [arg1] [arg2] ..." << endl;
        cout << "Available options: f1, f2, f3, c1, c2\n" << endl;
        return 1;
    }

    cout << "=== EXECUTING SELECTED FUNCTIONS ===" << endl;

    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];

        cout << "\nAnalyzing argument [" << i << "]: " << arg << endl;

        if (arg == "f1") {
            function1();
        } 
        else if (arg == "f2") {
            function2();
        } 
        else if (arg == "f3") {
            function3();
        } 
        else if (arg == "c1") {
            functionC1();
        } 
        else if (arg == "c2") {
            functionC2();
        } 
        else {
            cout << "X Error: Unknown argument '" << arg << "'! Skipping..." << endl;
        }
    }

    cout << "\n======================================" << endl;
    cout << "Finished processing arguments." << endl;
    return 0;
}