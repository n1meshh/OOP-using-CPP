// // constructor 

// // Intro:
// // It is a speical functon that is invoked automatically at the time of object creation.
// // Name of constructor should be same as class name.
// // Have no return type.
// // use to intialize the value.

// // =========================================//

// // defaultConstructor
// // name of constructor  = name of class .It do not take any arguments


// #include<iostream>
// using namespace std;

// class complexNumber {
// private:
//     float real;
//     float img;

// public:
//     // Default constructor
//     complexNumber() {
//         cout<<"Inside Default Constructor"<<endl;
//         real = 0;
//         img = 0;
//     }

//     // Parameterized constructor
//     complexNumber(float r, float i) {
//           cout<<"Inside parameterized Constructor"<<endl;
//         real = r;
//         img = i;
//     }

//     // Copy constructor (const reference)
//     complexNumber( complexNumber &c) {
//           cout<<"Inside copy Constructor"<<endl;
//         real = c.real;
//         img = c.img;
//     }

//     ~complexNumber()
//     {
//         cout<<"Destroying object";//destroy garxa --last ma jun first ma tei destroy hunxa
//         //destructor le kunei pani argument lideina wa return gardeina tesiele //use :destructor sabai object ko lagi common hunxa tyo object le ocupy gareko memmory destroy garnu ho
//     }


//     void showdata() {
//         cout << real << "+i" << img << endl;
//     }
// };

// int main() {
//     complexNumber c1; //effect : call default compiler le aafei  value 0 banaune vayo.
//     complexNumber c2(1.2, 2.4);//effect:parameterizzed construtor call garxa
//     complexNumber c3(c2);//effect clone vayo c2 ra c3

//     c1.showdata();
//     c2.showdata();
//     c3.showdata();

//     return 0;
// }

#include<iostream>

using namespace std;

class student{
    string name;
    int roll;
    int id;

};

