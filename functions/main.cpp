#include"Person.hpp"
#include<string>
#include<iostream>

using namespace std;


string getValue(int a);

void updateValueBy10( int &a);
void updateValueBy10( Person &p1);
// TO print people automatically
std::ostream& operator<<(std::ostream& out, const Person& person) {
    return out << person.toString() << endl;
}

int sum(int a, int b, int c=0, int d=0, int e=0) {
    return a + b + c + d + e;
}

float sum (float a, float b, float c=0.0f) {
    return a + b + c;
}

Person sum(Person p1, Person p2) {
    Person p3 = Person(p1.getSSN().substr(0, 3) + p2.getSSN().substr(3), p1.getName() + " " + p2.getName(), p1.getAge() + p2.getAge()); 
    return p3;
}
int x = 99;
string getCode(int x = 0){
    if(x == 0) {
        int y = x + 9;
        cout << y;
        return "Good request";
    }
    return "Bad request";
}
int global = 9;
void printCounter()
{
    static int counter = 0; // static local variable
    counter++;
    std::cout << "Counter: " << counter << std::endl;
}

int main() {

    // cout << getCode(0) << endl;
    Person john;

    Person ben = Person("123-45-6789", "Ben Parker", 68);

    cout << john.toString() << endl;
    cout << ben.toString() << endl;
    cout << "Person count: " << Person::getPersonCount() << endl;
    if(true) {
        Person amy = Person("111-11-1111", "Amy", 12);
        cout << "Person count: " << Person::getPersonCount() << endl;
        cout << "Who is oldest? " << Person::getOldestPerson(ben, amy) << endl;
    }
    cout << "Person count: " << Person::getPersonCount() << endl;

    // updateValueBy10(john);
    // cout << john.toString() << endl;

    // cout << boolalpha;
    // cout << john.getIsAdult() << endl;
    // cout << john.getIsSenior() << endl;

    // cout << "Is john older?" << john.isOlder(ben) << endl;

    // int a = 17;
    // cout << getValue(a) << endl;
    // cout << "a before function call " << a<< endl;
    // updateValueBy10(a);
    // cout << "a after function call " << a<< endl;

    // cout << ben << endl;

    // cout << "Adding 1 + 4: " << sum(1, 4) << endl;
    // cout << "Adding 1 + 4 + 6: " << sum(1, 4, 6) << endl;
    // cout << "Adding 1 + 4 + 6 + 8: " << sum(1, 4, 6, 8) << endl;
    // cout << "Adding 1 + 4 + 6 + 8 + 10: " << sum(1, 4, 6, 8 , 10) << endl;
    // cout << "Adding 1.5 + 4.3 + 6.9: " << sum(1.5f, 4.3f, 6.9f) << endl;

    // cout << "Adding people: " << sum(john, ben);

    // for (int i = 0; i < 5; ++i)
    // {
    //     printCounter();

    // }
    // return 0;
}

string getValue(int a) {
    if(a > 10) return "Greater than 10";
    return "Less than 10";
}

void updateValueBy10( int &a) {
    a+=global;
    cout << "a inside the function call " << a << endl;
}

void updateValueBy10( Person &p1) {
    p1.setAge(p1.getAge() + 10);
    cout << "Person inside function: " + p1.toString() << endl;
}