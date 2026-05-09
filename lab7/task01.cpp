#include <iostream>
using namespace std;

class Display {
private:
    int lastResult;

public:
    Display() {
        lastResult = 0;
    }

    void showResult(int result) {
        lastResult = result;
        cout << "Result: " << result << endl;
    }

    int getLastResult() {
        return lastResult;
    }
};

class Calculator {
private:
    Display display;

public:
    void add(int a, int b) {
        int result = a + b;
        display.showResult(result);
    }

    void multiply(int a, int b) {
        int result = a * b;
        display.showResult(result);
    }

    int getLastResult() {
        return display.getLastResult();
    }
};

int main() {
    Calculator calc;

    calc.add(5, 3);
    calc.multiply(4, 2);

    cout << "Last Result: " << calc.getLastResult() << endl;

    return 0;
}