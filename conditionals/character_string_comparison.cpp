#include <iostream>
using namespace std;

int main() {
    char char1 = 'a';
    char char2 = 'b';

    if (char1 < char2) {
        cout << "Character " << char1 << " is less than " << char2 << endl;
    } 
    else if(char1 == char2) {
        cout << "Character " << char1 << " is equal to " << char2 << endl;
    }
    else {
        cout << "Character " << char1 << " is greater than " << char2 << endl;
    }

    string str1 = "zebra";
    string str2 = "banana";

    if (str1 < str2) {
        cout << "String \"" << str1 << "\" is less than \"" << str2 << "\"" << endl;
    } 
    else if (str1 == str2) {
        cout << "String \"" << str1 << "\" is equal than \"" << str2 << "\"" << endl;
    }
    else {
        cout << "String \"" << str1 << "\" is greater than \"" << str2 << "\"" << endl;
    }

    return 0;
}