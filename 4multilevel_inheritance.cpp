#include<bits/stdc++.h>
using namespace std;

// Parent class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// Parent class inheriting from Vehicle
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is being driven" << endl;
    }
};

// Child class inheriting from Car
class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car is charging" << endl;
    }
};


int main(){
    
    
    ElectricCar my_electric_car;
    my_electric_car.start(); 
    my_electric_car.drive();  
    my_electric_car.charge();
    return 0;
}