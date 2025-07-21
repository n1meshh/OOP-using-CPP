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
