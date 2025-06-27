//======the ability of having more than one function in c++ with same function name but differences in type/number of arguments is known as function overloading=====

//question 1 : Wap a program in c++ to calculate the area of cricle and rectangle using the cncept oof function overloading


#include <iostream>
#define PI  3.14
using namespace std;

float area(float);             // Circle
float area(float, float);      // Rectangle

int main() {
    float length, breadth, radius, areaOFrectangle, areaOFcircle;

    cout << "Enter the value of the length and breadth: " << endl;
    cin >> length >> breadth;
    areaOFrectangle = area(length, breadth);
    cout << "Area of rectangle is: " << areaOFrectangle << endl;

    cout << "Enter the value of the radius: " << endl;
    cin >> radius;
    areaOFcircle = area(radius);
    cout << "Area of circle is: " << areaOFcircle << endl;

    return 0;
}

float area(float r) {
    return PI * r * r;
}

float area(float l, float b) {
    return l * b;
}
