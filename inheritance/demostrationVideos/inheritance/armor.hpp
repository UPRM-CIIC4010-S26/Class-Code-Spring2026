#include <iostream>
#include <string>
#include"Item.hpp"
using namespace std;


class Armor : public Item {
private:
    int defense;

public:
    Armor(string name, int value, double weight, int defense);

    // Getter
    int getDefense() { return defense; }
    // Setter
    void setDefense(int defense) { this->defense = defense; }
    
    void showInfo() override;
    void equip();
};
