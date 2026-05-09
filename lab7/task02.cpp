#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
};

class Student {
private:
    Calculator* calculator;

public:
    Student(Calculator* calc) {
        calculator = calc;
    }

    void performAddition(int a, int b) {
        int result = calculator->add(a, b);
        cout << "Addition Result: " << result << endl;
    }

    void performMultiplication(int a, int b) {
        int result = calculator->multiply(a, b);
        cout << "Multiplication Result: " << result << endl;
    }
};

int main() {
    Calculator sharedCalculator;

    Student s1(&sharedCalculator);
    Student s2(&sharedCalculator);

    s1.performAddition(5, 3);
    s2.performMultiplication(4, 2);

    return 0;
}