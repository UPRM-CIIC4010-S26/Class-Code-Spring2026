#include<iostream>
#include<string>

using namespace std;

void conditions1(int x) {
    
    if(x <10)
        cout << "Less than 10" << endl;
    else if( x < 20)
        cout << "Less than 20" << endl;
    else if(x < 30)
        cout << "Less than 30" << endl;
    else if( x < 40)
        cout << "Less than 40" << endl;
    else 
        cout << "More than 40" << endl;
    cout << "After if" << endl;
}

// int main() {
//     conditions1(31);
//     int y = 1;

//     string name = (y < 15) ? "Ben" : "Bob";
    
//     cout << name << endl;
// }