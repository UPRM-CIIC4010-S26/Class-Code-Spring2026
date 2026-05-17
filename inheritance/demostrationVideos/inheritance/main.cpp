#include <iostream>
#include<vector>
#include "weapon.hpp"
#include "armor.hpp"
#include "potion.hpp"
using namespace std;

int main() {
    vector<Item*> inventory;
    Weapon* sword = new Weapon("Sword", 100, 5.0, 20);
    Armor* helmet = new Armor("Helmet", 50, 2.0, 10);
    Potion* healthPotion = new Potion("Health Potion", 25, 1.0, 30);

    inventory.push_back(sword);
    inventory.push_back(helmet);
    inventory.push_back(healthPotion);

    helmet->equip();

    for(Item* item : inventory) {
        item->showInfo();
    }

    return 0;
}