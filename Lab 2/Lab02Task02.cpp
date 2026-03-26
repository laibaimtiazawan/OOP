#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions();
    int area();
    int perimeter();
};

void Rectangle::setDimensions() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

int Rectangle::area() {
    return length * width;
}

int Rectangle::perimeter() {
    return 2 * (length + width);
}

int main() {
    Rectangle r1;

    r1.setDimensions();

    cout << "\nArea: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}