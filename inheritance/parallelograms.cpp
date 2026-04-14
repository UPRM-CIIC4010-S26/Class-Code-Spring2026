#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Parallelogram {

    private:
    double height;
    double base;
    double angle;// In degrees.

    protected:
    void saySomething() { cout << "Im protected";}

    public:
    Parallelogram(double height, double base, double angle) {
        this->height = height;
        this->base = base;
        this->angle = angle;
        cout << "Parallelogram constructor" << endl;
    }
    Parallelogram() : Parallelogram(10, 10, 90){}

    double getSide() const {
        return height;
    }

    void setSide(double value) {
        height = value;
    }

    double getBase() const {
        return base;
    }

    void setBase(double value) {
        base = value;
    }

    double getAngle() const {
        return angle;
    }

    void setAngle(double value) {
        angle = value;
    }

    double getArea() {
        cout << "Calculated in parallelogram" << endl;
        double height = getSide() * sin(angle * M_PI/180);
        return getBase() * height;
    }
    double getPerimeter() {
        return 2 * (getBase() + getSide());
    }
    virtual string getShapeName() {
        return "Parallelogram";
    }
};

/*
    Overloading for the Paralellogram to get printed
*/
ostream& operator<<(ostream& out, Parallelogram& shape) {
    // Since parallelogram is a constant the methods it can access must be constant as well
    return out << shape.getShapeName() + "(" << shape.getSide() <<
                ", " << shape.getBase() << ", " << shape.getAngle() <<
                ")" <<endl;
}


class Rectangle : public Parallelogram {
 
    
    public:
    // Parametized constructor
    Rectangle(int height, int base): Parallelogram(height, base, 90){}
    Rectangle() {}

    // Get shape name override
    string getShapeName() override { return "Rectangle";}
    void sayHello() {
        cout << "HELLO!\n";
    }

};

class Square : public Rectangle {
    public:
    // Parametized constructor
    Square(int side): Rectangle(side, side){
        saySomething();
        getArea();
    }
    // Get shape name override
    string getShapeName() override {return "Square";}
};



int main() {
    Parallelogram shape1 = Parallelogram(10, 25, 30);
    cout << shape1;
    cout << "Has area: " << shape1.getArea() << endl;
    cout << "Has Perimeter: " << shape1.getPerimeter() << endl;
    cout << "Shape: " << shape1.getShapeName() << endl;

    Rectangle shape2 = Rectangle(15, 20);
    cout << "shape2==============\n";
    cout << shape2;
    cout << "Has area: " << shape2.getArea() << endl;
    cout << "Has Perimeter: " << shape2.getPerimeter() << endl;
    cout << "Shape: " << shape2.getShapeName() << endl;


    Parallelogram *shape3 = new Square(10);

    cout << "shape3==============\n";
    cout << "Has area: " << shape3->getArea() << endl;
    cout << "Has Perimeter: " << shape3->getPerimeter() << endl;
    cout << "Shape: " << shape3->getShapeName() << endl; 




    Parallelogram *shape4 = new Square( 20);

    Rectangle *shapeFour = static_cast<Rectangle *>(shape4);
    shapeFour->sayHello();
    cout << "==============\n";
    cout << "Has area: " << shapeFour->getArea() << endl;
    cout << "Has Perimeter: " << shapeFour->getPerimeter() << endl;
    cout << "Shape: " << shapeFour->getShapeName() << endl;

    // Square shape5 = Square(15);
    // cout << "==============\n";
    // cout << shape5;
    // cout << "Has area: " << shape5.getArea() << endl;
    // cout << "Has Perimeter: " << shape5.getPerimeter() << endl;
    // cout << "Shape: " << shape5.getShapeName() << endl;
    // shape5.sayHello();

    // Rectangle *shape6 = new Parallelogram(10, 20);
    // cout << "==============\n";
    // cout << "Has area: " << shape6->getArea() << endl;
    // cout << "Has Perimeter: " << shape6->getPerimeter() << endl;
    // cout << "Shape: " << shape6->getShapeName() << endl;

 

}