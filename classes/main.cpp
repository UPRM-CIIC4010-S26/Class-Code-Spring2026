#include<iostream>
#include<string>
// #include "include/triangle.hpp"

using namespace std;

struct Coordinate {
    int y;
    int x;
    string toString() {
        return "(" + to_string(x) + ", " + to_string(y) + ")";
    }
};

int main() {
    // Triangle t1;
    
    // Triangle t2= Triangle(3, 5, 7);
    // // Triangle t3 = t1 + t2;
    // cout << "The area of the triangle with A=" << t1.getSideA() << ", B=" << t1.getSideB() << ", C=" << t1.getSideC() << " is: " << t1.getArea() << endl;
    // cout << "The area of the triangle with A=" << t2.getSideA() << ", B=" << t2.getSideB() << ", C=" << t2.getSideC() << " is: " << t2.getArea() << endl;

    // cout << "Coordinates t1: (" << t1.getCoords().getX() << ", " << t1.getCoords().getY() << ")"<< endl;

    Coordinate coord1 = {5, 7};
    Coordinate coord2 = {12, 90};

    cout << coord1.toString() << endl;
    cout << coord2.toString() << endl;

    coord1.x = 55;
    coord2.y = 123;
    cout << coord1.toString() << endl;
    cout << coord2.toString() << endl;

}