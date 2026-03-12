#include<iostream>
#include<string>
#include<vector>

using namespace std;

enum Type { VAMPIRE, WEREWOLF, GHOST, GHOUL, SEAMONSTER, ZOMBIE, DEMON, TROLL };
class MonsterCard
{
    private:
        int cardID;
        string name;
        int healthPoints;
        int attack;
        int defense;
        Type type;
        Type weakness;
        bool bloodlust;
        bool tapped;

    public:
        MonsterCard(int cardID, string name, int healthPoints, int attack, int defense, Type type, 
                    Type weakness, bool bloodlust) {
            this->cardID = cardID;
            this->name = name;
            this->healthPoints = healthPoints;
            this->attack = attack;
            this->defense = defense;
            this->type = type;
            this->weakness = weakness;
            this->bloodlust = bloodlust;
            this->tapped = false;
        }
        MonsterCard(): MonsterCard(1, "Vampire Minion",1, 1, 1, VAMPIRE, VAMPIRE, false) {};
        MonsterCard(int cardID, string name, int healthPoints, Type type, Type weakness);
        ~MonsterCard(){};

        int getCardID() const { return cardID; }
        void setCardID(int cardID_) { cardID = cardID_; }
        string getName() const { return name; }
        void setName(string name_) { name = name_; }
        int getHealthPoints() const { return healthPoints; }
        void setHealthPoints(int healthPoints_) { healthPoints = healthPoints_; }
        int getAttack() const { return attack; }
        void setAttack(int attack_) { attack = attack_; }
        int getDefense() const { return defense; }
        void setDefense(int defense_) { defense = defense_; }
        Type getType() const { return type; }
        void setType(Type type_) { type = type_; }
        Type getWeakness() const { return weakness; }
        void setWeakness(Type weakness_) { weakness = weakness_; }
        bool hasBloodlust() const { return bloodlust; }
        void setBloodlust(bool undead_) { bloodlust = undead_; }
        bool operator==(const MonsterCard& card) const {
            return this->healthPoints == card.getHealthPoints() && this->attack == card.getAttack() &&
                this->defense == card.getDefense() && this->type == card.getType() &&
                this->weakness == card.getWeakness() && this->bloodlust == card.hasBloodlust();
        }
        bool isTapped() const { return tapped; }
        void setTapped(bool tapped_) { tapped = tapped_; }
};
/*
    Constructor overload
    Default values:
    - attack = 5
    - defense = 3;
    - bloodlust = false
    - tapped = true 

    Note: Health cannot be larger than 20
*/
// MonsterCard(int cardID, string name, int healthPoints, Type type, Type weakness){

// }