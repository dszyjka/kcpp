#include <iostream>
#include <vector>
#include <string>

using namespace std;

class KviGameCharacter {
private:
    string CharacterName;
    int HealthPoints;
    int ManaPoints;
    vector<string> Equipment;
    
public:
    KviGameCharacter() {
        cout << "Nowy bohater wkracza do gry!" << endl;
    }
    
    ~KviGameCharacter() {
        cout << "Bohater polegl w walce lub opuscil gre!" << endl;
    }

    void SetCharacterName(string name) { CharacterName = name; };
    void SetHealthPoints(int hp) { HealthPoints = hp; };
    void SetManaPoints(int mp) { ManaPoints = mp; };
    void SetEquipment(vector<string> equipment) { Equipment = equipment; };

    string GetCharacterName() { return CharacterName; };
    int GetHealthPoints() { return HealthPoints; };
    int GetManaPoints() { return ManaPoints; };
    
    void PrintEquipment() {
        cout << "Ekwipunek: " << endl;
        for (size_t i = 0; i < Equipment.size(); i++) {
            cout << " - " << Equipment[i] << endl;
        }
    };

    void PrintCharacterStatus() {
        cout << "\n--- KARTA POSTACI ---" << endl;
        cout << "Imie:     " << GetCharacterName() << endl;
        cout << "Zdrowie:  " << GetHealthPoints() << " HP" << endl;
        cout << "Mana:     " << GetManaPoints() << " MP" << endl;
        PrintEquipment();
        cout << "---------------------\n" << endl;
    };
};

int main() {
    KviGameCharacter mage;
    mage.SetCharacterName("Gandalf Szary");
    mage.SetHealthPoints(150);
    mage.SetManaPoints(300);
    mage.SetEquipment({"Drewniany kostur", "Elficki miecz", "Magiczny pierscien", "Mikstura many"});
    
    mage.PrintCharacterStatus();
    
    return 0;
}