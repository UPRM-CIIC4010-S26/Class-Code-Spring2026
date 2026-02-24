#include"Person.hpp"
#include<string>

using namespace std;

Person::Person(string SSN, string name, int age){
    this->SSN = SSN;
    this->name = name;
    this->age = age;
    this->isAdult = age >= 18;
    this->isSenior = age >= 60;
}
/*
        Default should have
        SSN: 000-00-0000
        name: John Doe
        age: 67
        isAdult: false
        isSenior: false
    */
    Person::Person():Person("000-00-0000", "John Doe", 67) {
        this->isAdult = false;
        this->isSenior = false;
    }

    string Person::toString() const {
        return "(" + this->SSN + ") " + this->name + " " + to_string(this->age);
    }
    bool Person::isOlder(Person p2){
        return this->age > p2.getAge();
    }