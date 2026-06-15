#include <iostream>

using namespace std;

class B;

class A {
  friend class B;

  public:
    A() : sekretA(10) {}

    void PokazSekretB(const B& b) const;

  private:
    int sekretA;
};

class B {
  friend class A;

  public:
    B() : sekretB(20) {}

    void PokazSekretA(const A& a) const {
      cout << "Klasa B czyta prywatny skladnik A: " << a.sekretA << endl;
    }

  private:
    int sekretB;
};

void A::PokazSekretB(const B& b) const {
  cout << "Klasa A czyta prywatny skladnik B: " << b.sekretB << endl;
}

int main() {
  A a;
  B b;

  b.PokazSekretA(a);
  a.PokazSekretB(b);

  cout << "Przyjazn nie jest automatycznie wzajemna, dlatego w kodzie jawnie "
       << "dodano friend class po obu stronach." << endl;

  return 0;
}
