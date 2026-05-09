#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.1416 * radius * radius;
    }
};

void displayArea(Rectangle r)
{
    cout << "Rectangle Area = " << r.area() << endl;
}

void displayArea(Circle c)
{
    cout << "Circle Area = " << c.area() << endl;
}

int main()
{
    Rectangle rect(5, 4);
    Circle cir(3);

    displayArea(rect);
    displayArea(cir);

    Shape* ptr;

    ptr = &rect;
    cout << "Using Shape Pointer (Rectangle) = " << ptr->area() << endl;

    ptr = &cir;
    cout << "Using Shape Pointer (Circle) = " << ptr->area() << endl;

    return 0;
}