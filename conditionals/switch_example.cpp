#include <iostream>
using namespace std;

int main() {
    int day = 5;
    // switch statement
    switch (day) {
        case 1: // if(day == 1)
            cout << "Monday" << endl;
            break;
        case 2:  // else if (day == 2)
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    return 0;
}