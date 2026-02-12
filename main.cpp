#include<iostream>
#include<string>
#include"triangle.cpp"

using namespace std;

int main() {
    Triangle t1 = Triangle();
    
    Triangle t2= Triangle(3, 5, 7);
    cout << "The area of the triangle with A=" << t1.getSideA() << ", B=" << t1.getSideB() << ", C=" << t1.getSideC() << " is: " << t1.getArea() << endl;
    cout << "The area of the triangle with A=" << t2.getSideA() << ", B=" << t2.getSideB() << ", C=" << t2.getSideC() << " is: " << t2.getArea();

}