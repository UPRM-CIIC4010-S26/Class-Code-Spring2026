#ifndef ITEM_HPP
#define ITEM_HPP
#include<iostream>
#include<string>
using namespace std;

class Item {
    protected:
    string name;
    int value;
    double weight;
    string rarity;

    public:
    Item(string name, int value, double weight, string rarity) {
        this->name = name;
        this->value = value;
        this->weight = weight;
        this->rarity = rarity;
    }

    string getName() { return name; }
    int getValue() { return value; }
    double getWeight() { return weight; }
    string getRarity() { return rarity; }

    void setName(string name) { this->name = name; }
    void setValue(int value) { this->value = value; }
    void setWeight(double weight) { this->weight = weight; }
    void setRarity(string rarity) { this->rarity = rarity; }
    
    virtual void showInfo() = 0;
    
};
#endif