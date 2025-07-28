#include <iostream>
using namespace std;

class complexNumber {
private:
    float real;
    float imag;

public:
    complexNumber() { // default constructor
        real = 0;
        imag = 0;
    }

    complexNumber(float r, float i) { // parameterized constructor
        real = r;
        imag = i;
    }

    // Member function overloading +
    complexNumber operator +( complexNumber c) {
        complexNumber temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void showdata() {
        cout << "The sum is " << real << "+i" << imag << endl;
    }
};

int main() {
    complexNumber c1(1, 2), c2(1.1, 2.2), c3;
    c3 = c1 + c2;
    c3.showdata();
    return 0;
}