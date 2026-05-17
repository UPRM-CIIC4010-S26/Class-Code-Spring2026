#include "weapon.hpp"

Weapon::Weapon(string name, int value, double weight, int damage) :
Item(name, value, weight, "COMMON"){
    this->damage = damage;
}

void Weapon::showInfo() {
    cout << "Weapon: " << name << ", Value: " << value
            << ", Weight: " << weight << ", Rarity: " << rarity
            << ", Damage: " << damage << endl;
}

void Weapon::attack() {
    cout << name << " deals " << damage << " damage." << endl;
}


