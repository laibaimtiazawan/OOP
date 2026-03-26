#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    void getData();
    float add();
    float subtract();
    float multiply();
    float divide();
};

void Calculator::getData() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
}

float Calculator::add() {
    return num1 + num2;
}

float Calculator::subtract() {
    return num1 - num2;
}

float Calculator::multiply() {
    return num1 * num2;
}

float Calculator::divide() {
    return num1 / num2;
}

int main() {
    Calculator c;
    int choice;

    c.getData();

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Result: " << c.add();
    else if (choice == 2)
        cout << "Result: " << c.subtract();
    else if (choice == 3)
        cout << "Result: " << c.multiply();
    else if (choice == 4)
        cout << "Result: " << c.divide();
    else
        cout << "Invalid choice";

    return 0;
}