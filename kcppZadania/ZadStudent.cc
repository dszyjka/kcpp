#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int indeks;
};

bool indeksIstnieje(const vector<Student>& studenci, int indeks) {
    for (const Student& student : studenci) {
        if (student.indeks == indeks) {
            return true;
        }
    }
    return false;
}

void dodajStudenta(vector<Student>& studenci) {
    Student student;

    cout << "Imie: ";
    cin >> student.imie;
    cout << "Nazwisko: ";
    cin >> student.nazwisko;
    cout << "Numer indeksu: ";
    cin >> student.indeks;

    if (student.imie.empty() || student.nazwisko.empty()) {
        cout << "Imie i nazwisko nie moga byc puste." << endl;
        return;
    }

    if (indeksIstnieje(studenci, student.indeks)) {
        cout << "Student z takim numerem indeksu juz istnieje." << endl;
        return;
    }

    studenci.push_back(student);
    cout << "Dodano studenta." << endl;
}

void usunStudenta(vector<Student>& studenci) {
    int indeks;
    cout << "Podaj numer indeksu do usuniecia: ";
    cin >> indeks;

    for (auto it = studenci.begin(); it != studenci.end(); ++it) {
        if (it->indeks == indeks) {
            studenci.erase(it);
            cout << "Usunieto studenta." << endl;
            return;
        }
    }

    cout << "Nie znaleziono studenta." << endl;
}

void wyswietlListe(const vector<Student>& studenci) {
    if (studenci.empty()) {
        cout << "Lista jest pusta." << endl;
        return;
    }

    for (const Student& student : studenci) {
        cout << student.imie << " " << student.nazwisko << ", indeks: " << student.indeks << endl;
    }
}

string doMalychLiter(string tekst) {
    transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
    return tekst;
}

void sortujListe(vector<Student>& studenci) {
    sort(studenci.begin(), studenci.end(), [](const Student& a, const Student& b) {
        string nazwA = doMalychLiter(a.nazwisko);
        string nazwB = doMalychLiter(b.nazwisko);

        if (nazwA == nazwB) {
            return doMalychLiter(a.imie) < doMalychLiter(b.imie);
        }
        return nazwA < nazwB;
    });
    cout << "Posortowano liste." << endl;
}

void sprawdzStudenta(const vector<Student>& studenci) {
    int indeks;
    cout << "Podaj numer indeksu: ";
    cin >> indeks;

    cout << (indeksIstnieje(studenci, indeks) ? "Student istnieje." : "Student nie istnieje.") << endl;
}

int main() {
    vector<Student> studenci;
    int wybor;

    do {
        cout << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz, czy student istnieje" << endl;
        cout << "0. Koniec" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                dodajStudenta(studenci);
                break;
            case 2:
                usunStudenta(studenci);
                break;
            case 3:
                wyswietlListe(studenci);
                break;
            case 4:
                sortujListe(studenci);
                break;
            case 5:
                sprawdzStudenta(studenci);
                break;
            case 0:
                cout << "Koniec programu." << endl;
                break;
            default:
                cout << "Niepoprawny wybor." << endl;
                break;
        }
    } while (wybor != 0);

    return 0;
}
