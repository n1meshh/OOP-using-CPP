//Create a class vehicle having attributes make (int) , model(string),seatcapacity(int)
//create function to set and display data . create another class public - vehicle having attributes make (int),model(string),seatcapacity(int)&route(int),create functions to set and display data.


#include <iostream>
using namespace std;

class Vehicle {
private:
    int make;
    string model;
    int seatCapacity;

public:
    
    void setData(int m, string mo, int sc) {
        make = m;
        model = mo;
        seatCapacity = sc;
    }

 
    void displayData() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Seat Capacity: " << seatCapacity << endl;
    }
};

class Bus : public Vehicle {
private:
    int route;

public:
    void setData(int m, string mo, int sc, int r) {
        Vehicle::setData(m, mo, sc);
        route = r;
    }

    void displayData() {
        Vehicle::displayData();
        cout << "Route: " << route << endl;
    }
};

int main() {
    Vehicle v1;
    v1.setData(2023, "David Putra", 5);
    v1.displayData();

    cout << "\nBus Information:\n";
    Bus b1;
    b1.setData(2024, "Express Line", 40, 12);
    b1.displayData();

    return 0;
}