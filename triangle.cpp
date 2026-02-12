#include<iostream>
#include<cmath>
#include"triangle.hpp"

using namespace std;

Triangle::Triangle() {
    sideA = 10;
    this->sideB = 10;
    this->sideC = 10;
}
Triangle::Triangle(float sideA, float sideB, float sideC){
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

}
Triangle::Triangle(int sides[]) {
    this->sideA = sides[0];
    this->sideB = sides[1];
    this->sideC = sides[2];
}
float Triangle::getSemiPerimeter() {
    return (sideA + sideB + sideC)/2;
}

float Triangle::getArea() {
    float semiP = getSemiPerimeter();
    return sqrt(semiP *(semiP - sideA) * (semiP - getSideB()) * (semiP - getSideC()));

}

int sum(int a, int b);

int main() {
    Triangle t1 = Triangle();
    cout << t1.sideC << endl;
    Triangle t2= Triangle(3, 5, 7);
    cout << "The area of the triangle with A=" << t1.getSideA() << ", B=" << t1.getSideB() << ", C=" << t1.getSideC() << " is: " << t1.getArea() << endl;
    cout << "The area of the triangle with A=" << t2.getSideA() << ", B=" << t2.getSideB() << ", C=" << t2.getSideC() << " is: " << t2.getArea();
    cout << sum(10, 10);

}

int sum(int a, int b) { return a + b;}