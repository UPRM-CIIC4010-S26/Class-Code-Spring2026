#include"Person.hpp"
#include<string>
#include<iostream>

using namespace std;


string getValue(int a);

void updateValueBy10(int &a);
void updateValueBy10(Person &p1);
// TO print people automatically
std::ostream& operator<<(std::ostream& out, const Person& person) {
    // Since triangle is a constant the methods it can access must be constant as well
    return out << person.toString() << endl;
}
int main() {
    Person john;

    Person ben = Person("123-45-6789", "Ben Parker", 68);

    cout << john.toString() << endl;
    cout << ben.toString() << endl;

    updateValueBy10(john);
    cout << john.toString() << endl;

    cout << boolalpha;
    cout << john.getIsAdult() << endl;
    cout << john.getIsSenior() << endl;

    cout << "Is john older?" << john.isOlder(ben) << endl;

    int a = 17;
    cout << getValue(a) << endl;
    cout << "a before function call " << a<< endl;
    updateValueBy10(a);
    cout << "a after function call " << a<< endl;

    cout << ben << endl;

}

string getValue(int a) {
    if(a > 10) return "Greater than 10";
    return "Less than 10";
}

void updateValueBy10(int &a) {
    a+=10;
    cout << "a inside the function call " << a << endl;
}

void updateValueBy10(Person &p1) {
    p1.setAge(p1.getAge() + 10);
    cout << "Person inside function: " + p1.toString() << endl;
}