#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) {
        name = n;
        price = p;
    }

    void displayProduct() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class Electronics : public Product {
private:
    int warrantyYears;

public:
    Electronics(string n, double p, int w) : Product(n, p) {
        warrantyYears = w;
    }

    void displayElectronics() {
        displayProduct();
        cout << "Warranty Years: " << warrantyYears << endl;
    }
};

int main() {
    Electronics e("Laptop", 1200.5, 2);
    e.displayElectronics();
    return 0;
}