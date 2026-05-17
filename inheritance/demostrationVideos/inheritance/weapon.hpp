
#include "Item.hpp"

class Weapon : public Item {
private:
    int damage;

public:
    Weapon(string name, int value, double weight, int damage);
    // Getter
    int getDamage() { return damage; }
    // Setter
    void setDamage(int damage) { this->damage = damage; }
    
    void showInfo() override;
    void attack();
};
