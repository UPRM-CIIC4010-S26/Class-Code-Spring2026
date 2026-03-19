#include<iostream>
#include<string>
#include"MonsterCard.hpp"

/*
    Find and return the weakest monster in the deck.
    The weakest card is the card with the lowest 
    attack.
*/
MonsterCard findWeakestMonster(vector<MonsterCard> deck) {
    MonsterCard weakest = deck[0];
    for(int i = 1; i < deck.size(); i++) {
        if(weakest.getAttack() > deck[i].getAttack())
            weakest = deck[i];
    }
    return weakest;
}


float getAttackAverage(vector<MonsterCard> deck) {
    float sum = 0;
    
    return sum;
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

// int countWerewolves(vector<MonsterCard> deck) {
    
// }

void removeEvenAttack(vector<MonsterCard> &deck) {
    for(auto it = deck.begin() ; it != deck.end(); it++) {
        if(it->getAttack() % 2 == 0) {
            deck.erase(it);
            it--;
        }
    }
    // for(int i = deck.size() - 1; i >= 0; i--) {
    //     if(deck[i].getAttack()%2 == 0) {
    //         deck.erase(deck.begin() + i);
    //     }
    // }
}

int main() {
    vector<MonsterCard> deck = {
        MonsterCard(1, "Vampire Minion", 10, 29, 3, VAMPIRE, VAMPIRE, false),
        MonsterCard(2, "Werewolf Brute", 15, 70, 4, WEREWOLF, VAMPIRE, false),
        MonsterCard(3, "Ghostly Specter", 8, 10, 2, GHOST, WEREWOLF, true),
        MonsterCard(4, "Ghoul Fiend", 12, 90, 9, GHOUL, GHOST, false),
        MonsterCard(5, "Seamonster Leviathan", 2, 10, 6, SEAMONSTER, TROLL, true)
    };


    // cout << "Werewolf card count: " << countWerewolves(deck) << endl;
    // Test findStrongestMonster
    MonsterCard strongest = findWeakestMonster(deck);
    cout << "The weakest monster is: " << strongest.getName() << endl;

    removeEvenAttack(deck);
    for(MonsterCard m: deck) {
        cout << m.getName() << " ";
    }
    cout << endl;
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