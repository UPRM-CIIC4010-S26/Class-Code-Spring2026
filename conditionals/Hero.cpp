#include<string>
#include "Hero.hpp"

using namespace std;

void Hero::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}
/*
 * Heals the hero by a specified amount. 
 * The hero's health should not exceed 100 after healing.
 */
void Hero::heal(int amount) {
    health += amount;
    if(this->health >100)
        this->health = 100;
}
/*
 * Calculates the attack power based on distance as follows:
 * - If the distance is less than 5 and the hero has a sword, 
 *   the attack power is 3.5 times the base attack.
 * - If the distance is between 5 and 15 and the hero has a bow, 
 *   the attack power is 3 times the base attack.
 * - If the distance is greater than 15 and the hero has a bow 
 *   the attack power is 2.5 times the base attack.
 * return 0 if the hero does not have the appropriate weapon for the distance.
 */
float Hero::rangeAttack(float distance) const {
    return 0.0f;
}
/*
 * Uses an item from the hero's inventory. 
 * The effects of the items are as follows:
 * - POTION: Heals the hero by 20 health points, 
 *   but the hero's health should not exceed 100.
 * - POISON: Reduces the hero's health by 15 points, 
 *   but the hero's health should not drop below 0.
 * - ELIXER: Increases the hero's attack power by 10 
 *   for the next attack, but this effect should only 
 *   last for one attack.
 */
void Hero::useItem(Items item) {
    return;
}