#include "potion.hpp"

Potion::Potion(string name, int value, double weight, int healingAmount) 
   : Item(name, value, weight, "RARE") {
    this->healingAmount = healingAmount;
}

void Potion::showInfo() {
    cout << "Potion: " << name << ", Value: " << value
            << ", Weight: " << weight << ", Rarity: " << rarity
            << ", Healing: " << healingAmount << endl;
}


void Potion::drink() {
    cout << name << " restores " << healingAmount << " HP." << endl;
}


