#pragma once
#include<string>

enum Items { POTION, POISON, ELIXER};
class Hero
{
private:
    std::string name;
    int attack;
    bool hasShield;
    bool hasSword;
    bool hasBow;
    int health;
public:
    Hero(std::string name, int attack, bool shield, 
        bool sword, bool bow, int health):name(name), attack(attack), 
        hasShield(shield), hasSword(sword), hasBow(bow), health(health){}

    Hero():Hero("Link", 40, true, true, true, 100){}
    ~Hero(){}

    // Getters
    std::string getName() const { return name; }
    int getAttack() const { return attack; }
    bool getHasShield() const { return hasShield; }
    bool getHasSword() const { return hasSword; }
    bool getHasBow() const { return hasBow; }
    int getHealth() const { return health; }

    // Setters
    void setName(std::string name) { this->name = name; }
    void setAttack(int attack) { this->attack = attack; }
    void setHasShield(bool hasShield) { this->hasShield = hasShield; }
    void setHasSword(bool hasSword) { this->hasSword = hasSword; }
    void setHasBow(bool hasBow) { this->hasBow = hasBow; }
    std::string toString() const {
        return "Name: " + name + ", Attack: " + std::to_string(attack) + 
               ", Has Shield: " + (hasShield ? "Yes" : "No") + 
               ", Has Sword: " + (hasSword ? "Yes" : "No") + 
               ", Has Bow: " + (hasBow ? "Yes" : "No") + 
               ", Health: " + std::to_string(health);
    }
    void takeDamage(int damage);

    // Exercises
    /*
     * Heals the hero by a specified amount. 
     * The hero's health should not exceed 100 after healing.
     */
    void heal(int amount);
    /*
     * Calculates the attack power based on distance as follows:
     * - If the distance is less than 5 and the hero has a sword, 
     *   the attack power is 3.5 times the base attack.
     * - If the distance is between 5 and 15 and the hero has a bow, 
     *   the attack power is 3 times the base attack.
     * - If the distance is greater than 15 and the hero has a bow 
     *   the attack power is 2.5 times the base attack.
    */
    float rangeAttack(float distance) const;

    /*
     * Uses an item from the hero's inventory. 
     The effects of the items are as follows:
     * - POTION: Heals the hero by 20 health points, 
     *   but the hero's health should not exceed 100.
     * - POISON: Reduces the hero's health by 15 points, 
     *   but the hero's health should not drop below 0.
     * - ELIXER: Increases the hero's attack power by 10 
     *   for the next attack, but this effect should only 
     *   last for one attack.
    */
    void useItem(Items item);


};

