#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasPermission = false;
    if (age >= 18) {
        if (hasPermission) {
            cout << "You are allowed to enter." << endl;
        } else {
            cout << "You need permission to enter." << endl;
        }
    } else {
        cout << "You are too young to enter." << endl;
    }

    // Using conditions instead
    // if (age >= 18 && hasPermission) {
    //     cout << "You are allowed to enter." << endl;
    // } 
    // else if (age >= 18){
    //     cout << "You need permission to enter." << endl;
    // }
    // else {
    //     cout << "You are too young to enter." << endl;
    // }
    
    // Using conditional operator
    if (age >= 18 && hasPermission) {
        cout << "You are allowed to enter." << endl;
    }
    // (condition) ? do this if true : do this if false
    // Based on the condition it determines which string to return to the cout
    // cout << ((age>=18) ? "You need permission to enter." : "You are too young to enter.") << endl;
    
    return 0;
}