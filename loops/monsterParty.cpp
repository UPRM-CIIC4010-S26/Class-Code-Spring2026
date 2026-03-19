#include<iostream>
#include<string>
#include"MonsterCard.hpp"

/*
    Find and return the strongest monster in the deck.
    The strongest card is the card with the highest 
    attack.
*/
MonsterCard findStrongestMonster(MonsterCard deck[], int size) {
    MonsterCard strongest = deck[0];
    for(int i = 1; i < size; i++) {
        if(strongest.getAttack() < deck[i].getAttack())
            strongest = deck[i];
    }
    return strongest;
}
int findStrongestMonsterPosition(MonsterCard deck[], int size) {
    MonsterCard strongest = deck[0];
    int strongestPosition = 0;
    for(int i = 1; i < size; i++) {
        if(strongest.getAttack() < deck[i].getAttack()){
            strongest = deck[i];
            strongestPosition = i;
        }
    }
    return strongestPosition;
}

float getAttackAverage(MonsterCard deck[], int size) {
    float sum = 0;
    // for(int i = 0; i < size; i++) {
    //     sum += deck[i].getAttack();
    // }
    for(MonsterCard monster: deck) {
        sum += monster.getAttack();
    }
    return sum/size;
}
/*
    Simulate a battle between cards. 
    Each round deduct the given attack points from the 
    other card's health points.
    The first card to reach 0 or less health loses.
    Return 1 if card 1 wins, 2 if card 2 wins and 0 if both have 
    0 or less health.
*/
int monsterFight(MonsterCard card1, MonsterCard card2) {
    return -9;
}

int countWerewolves(MonsterCard deck[], int size) {
    int count = 0;
    // int index = 0;
    // while(index < size) {
    //     MonsterCard monster = deck[index];
    //     if(monster.getType() == WEREWOLF)
    //         count++;
    //     index++;
    // }
    for(int index = 0; index < size; index++) {

        if(deck[index].getType() == WEREWOLF)
            count++;
    }
    // for(MonsterCard card: deck) {
    //     if(card.getType() == WEREWOLF)
    //         count++;
    // }
    return count;
}
int countEvenAttack(MonsterCard deck[], int size){
    int count = 0;
    int index = 0;
    while(index < size) {
        MonsterCard monster = deck[index];
        if(monster.getAttack() % 2 == 0)
            count++;
        index++;
    }
    return count;
}

int main() {
    MonsterCard deck[5] = {
        MonsterCard(1, "Vampire Minion", 10, 5, 3, VAMPIRE, VAMPIRE, false),
        MonsterCard(2, "Werewolf Brute", 15, 7, 4, WEREWOLF, VAMPIRE, false),
        MonsterCard(3, "Ghostly Specter", 8, 6, 2, GHOST, WEREWOLF, true),
        MonsterCard(4, "Ghoul Fiend", 12, 90, 9, GHOUL, GHOST, false),
        MonsterCard(5, "Seamonster Leviathan", 20, 10, 6, SEAMONSTER, TROLL, true)
    };

    cout << "Werewolf card count: " << countWerewolves(deck, 5) << endl;
    // Test findStrongestMonster
    MonsterCard strongest = findStrongestMonster(deck, 5);
    cout << "The strongest monster is: " << strongest.getName() << endl;

    // // Test monsterFight
    // int result = monsterFight(deck[0], deck[1]);
    // if (result == 1) {
    //     cout << deck[0].getName() << " wins!" << endl;
    // } else if (result == 2) {
    //     cout << deck[1].getName() << " wins!" << endl;
    // } else {
    //     cout << "It's a tie!" << endl;
    // }

    // return 0;
}