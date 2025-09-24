#include<iostream>
using namespace std;

class Car {
public:
    string brand;
    int seats;
};

class Vehicle : virtual public Car {
public:
    int wheels;
};

class TwoWheeler : virtual public Car {
public:
    int handleType;
};

class ElectricCar : public Vehicle, public TwoWheeler {
public:
    int batteryCapacity;
    int range;
};

int main() {
    ElectricCar c1;
    c1.brand = "Toyota";
    c1.seats = 5;
    c1.batteryCapacity = 60;
    c1.range = 99;
    c1.wheels = 4;
    c1.handleType = 1;

    cout << c1.range << " " << c1.brand << " " << c1.seats << " "
         << c1.batteryCapacity << " " << c1.wheels << " " << c1.handleType << endl;

    return 0;
}
