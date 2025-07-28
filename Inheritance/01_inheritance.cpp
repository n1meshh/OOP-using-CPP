#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "Studying academic subjects." << endl;
    }
};

class Athlete {
public:
    void train() {
        cout << "Training for sports." << endl;
    }
};

class StudentAthlete : public Student, public Athlete {
public:
    void show() {
        cout << "I'm a student and an athlete." << endl;
    }
};

int main() {
    StudentAthlete sa;
    sa.study();   // From Student
    sa.train();   // From Athlete
    sa.show();    // From StudentAthlete

    return 0;
}
// //

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void Afunction(){
//         cout<<"inheritated A";
//     }
// };
// class B{
//     public:
//     void Bfunction(){
//         cout<<"Inherited B";
//     }
// };

// class C : public A ,public B{ 
    
// };


// int main() {
//     C c1;
//     c1.Afunction();
//     c1.Bfunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void Aunc(){
//         cout<<"This is A";
//     }
// };
// class B : public A{
//     public:
//     void Bfunc(){
//         cout<<"This is B";
//     };

// };
// class C : public B{};

// int main(){
//     C c1;
//     c1.Aunc();
//     c1.Bfunc();
//     return 0;
// }