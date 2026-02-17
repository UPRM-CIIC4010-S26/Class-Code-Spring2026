#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "coordinates.hpp"
using namespace std;

class Triangle {
    private:
        float sideA;
        float sideB;
        float sideC;
        Coordinates coords;
        float getSemiPerimeter();
        
        public:
        Triangle();
        Triangle(float a, float b, float c);
        Triangle(int sides[]);
        // New constructor
        // Triangle(float sides);
        float getArea();
        float getSideA() { return this->sideA; }
        float getSideB() { return this->sideB; }
        float getSideC() { return this->sideC; }
        Coordinates getCoords() { return this->coords;}
        void setSideA(float a) {this->sideA = a; }
        void setSideB(float b) {this->sideB = b; }
        void setSideC(float c) {this->sideC = c; }
        void setCoordinates(Coordinates c) {this->coords = c;}
        void setCoordinates(int x, int y) { this->coords = Coordinates(x, y);}

        // Static method
        // static Triangle largestTriangle(Triangle t1, Triangle t2);
};

#endif


