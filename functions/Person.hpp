#pragma once // Achieves same as ifndef technique shown
#include<string>
class Person
{
private:
    /* data */
    std::string SSN;
    std::string name;
    int age;
    bool isAdult;
    bool isSenior;
public:
    /*
        Parametized contructor
        Default values:
            isAdult is true if age if the person is 18 or older
            isSenior is true if person is 60 or older
    */
    Person(std::string SSN, std::string name, int age);
    /*
        Default should have
        SSN: 000-00-0000
        name: John Doe
        age: 67
        isAdult: true
        isSenior: true
    */
    Person();
    ~Person(){}
    std::string getSSN() const {
        return SSN;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    bool getIsAdult() const {
        return isAdult;
    }
    bool getIsSenior() const {
        return isSenior;
    }
    void setSSN(std::string newSSN) {
        SSN = newSSN;
    }
    void setName(std::string newName) {
        name = newName;
    }
    void setAge(int newAge) {
        age = newAge;
        // No setters for isAdult and isSenior since they are determined by age
        isAdult = age >= 18;
        isSenior = age >= 60;
    }
    std::string toString() const;
    bool isOlder(Person p2);
};


