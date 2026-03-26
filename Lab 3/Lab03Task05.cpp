#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:
    void setName(string n) {
        if (n != "")
            name = n;
        else
            cout << "Invalid name" << endl;
    }

    void setPrice(double p) {
        if (p > 0)
            price = p;
        else
            cout << "Invalid price" << endl;
    }

    void setQuantity(int q) {
        if (q >= 0)
            quantity = q;
        else
            cout << "Invalid quantity" << endl;
    }

    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};

int main() {
    Product p;

    p.setName("Laptop");
    p.setPrice(50000);
    p.setQuantity(10);

    cout << "Name: " << p.getName() << endl;
    cout << "Price: " << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}