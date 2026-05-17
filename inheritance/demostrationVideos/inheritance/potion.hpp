#include "Item.hpp"

class Potion : public Item{
private:
    int healingAmount;

public:
    Potion(string name, int value, double weight, int healingAmount);
    // Getter
    int getHealingAmount() { return healingAmount; }
    // Setter
    void setHealingAmount(int healingAmount) { this->healingAmount = healingAmount; }
    
    void showInfo() override;
    void drink();
};
