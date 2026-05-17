#include "armor.hpp"

Armor::Armor(string name, int value, double weight, int defense) :
    Item(name, value, weight, "UNCOMMON") {
    this->defense = defense;
}

void Armor::showInfo() {
    cout << "Armor: " << name << ", Value: " << value
            << ", Weight: " << weight << ", Rarity: " << rarity
            << ", Defense: " << defense << endl;
}

void Armor::equip() {
    cout << name << " increases defense by " << defense << "." << endl;
}

