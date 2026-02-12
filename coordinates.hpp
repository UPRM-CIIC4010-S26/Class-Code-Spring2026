#ifndef COORD_H
#define COORD_H

class Coordinates {
    private:
        int x;
        int y;
    public:
        Coordinates(int x, int y): x(x), y(y){}
        Coordinates(): Coordinates(1, 1){}
        int getX() {return x;}
        int getY(){return y;}
        void setX(int x) {this->x = x;}
        void setY(int y){this->y = y;}

};

#endif