#include<iostream>
using namespace std;

class Rectangle;

class Square {
    float length, breadth;
public:
    void setData(float length, float breadth) {
       this->length = length;
       this->breadth = breadth;
    }

    friend void calcArea(Square s, Rectangle r);
};

class Rectangle {
    float length, breadth;
public:
    void setData(float length, float breadth) {
       this->length = length;
       this->breadth = breadth;
    }

    friend void calcArea(Square s, Rectangle r);
};

void calcArea(Square s, Rectangle r) {
    float areaSquare = s.length * s.breadth;
    float areaRectangle = r.length * r.breadth;
    cout << "Area of Square: " << areaSquare << endl;
    cout << "Area of Rectangle: " << areaRectangle << endl;
}

int main() {
    Square s1;
    Rectangle r1;
    s1.setData(5.5, 4.0);
    r1.setData(6.0, 3.0);
    calcArea(s1, r1);
    return 0;
}