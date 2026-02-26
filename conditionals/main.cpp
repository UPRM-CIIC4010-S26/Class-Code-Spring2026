#include<iostream>
#include<string>
#include "Hero.hpp"

using namespace std;
void heal(int amount, Hero hero) {
    hero.setHealth(hero.getHealth() + amount);
    if(hero.getHealth() > 100) hero.setHealth(100);
}
int main() {
    string divider;
    divider.assign(50, '=');
    Hero link; 
    cout << divider << endl;
    cout << link.toString() << endl;
    link.takeDamage(40);
    cout << "After taking damage: " << link.toString() << endl;
    link.heal(70);
    cout << "After healing: " << link.toString() << endl;
//     // --------------------------------
//     // cout << divider << endl;
//     // cout << "Range attack at distance 3: " << link.rangeAttack(3) << endl;
//     // cout << "Range attack at distance 10: " << link.rangeAttack(10) << endl;
//     // cout << "Range attack at distance 20: " << link.rangeAttack(20) << endl;
//     // link.setHasSword(false);
//     // link.setHasBow(false);
//     // cout << "Range attack at distance 3 without sword: " << link.rangeAttack(3) << endl;
//     // cout << "Range attack at distance 10 without bow: " << link.rangeAttack(10) << endl;
//     // --------------------------------
//     // cout << divider << endl;
//     // link.useItem(POTION);
//     // cout << "After using potion: " << link.toString() << endl;
//     // link.useItem(POISON);
//     // cout << "After using poison: " << link.toString() << endl;
//     // link.useItem(ELIXER);
//     // cout << "After using elixer: " << link.toString() << endl;
}