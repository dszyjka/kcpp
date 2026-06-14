#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Podaj liczbe n: ";
  cin >> n;

  cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }

  cout << "\nLiczby podzielne przez 7 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0) {
      cout << i << " ";
    }
  }

  return 0;
}
