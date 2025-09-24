#include<iostream>
using namespace std;

class Car {
public:
    string brand;
    int seats;
};

class ElectricCar : public Car { //child class inheriting from Car
public:
    int batteryCapacity;
    int range;          
};

int main(){
    ElectricCar c1; //constructing an object of ElectricCar
    c1.brand = "Toyota";
    c1.seats = 5;
    c1.batteryCapacity = 60; 
    c1.range = 99;          
    cout << c1.range << " "<<c1.brand <<" "<<c1.seats<<" "<<c1.batteryCapacity <<endl;
}