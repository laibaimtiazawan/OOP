#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) {
        brand = b;
        cout << "Vehicle Constructor: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    string model;

public:
    Car(string b, string m) : Vehicle(b) {
        model = m;
        cout << "Car Constructor: " << model << endl;
    }
};

class ElectricCar : public Car {
private:
    int battery;

public:
    ElectricCar(string b, string m, int bt) : Car(b, m) {
        battery = bt;
        cout << "ElectricCar Constructor: " << battery << " kWh" << endl;
    }
};

int main() {
    ElectricCar e("Tesla", "Model 3", 75);
    return 0;
}