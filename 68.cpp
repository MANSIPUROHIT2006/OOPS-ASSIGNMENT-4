// Create a program that uses polymorphism to calculate the area of different geometric shapes using a base class Shape and derived classes Circle and Rectangle.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return M_PI * radius * radius;  // Area of Circle: πr^2
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double area() override {
        return length * width;  // Area of Rectangle: length * width
    }
};

int main() {
    Shape* shape;

    Circle c(5);
    Rectangle r(4, 6);

    shape = &c;
    cout << "Circle Area: " << shape->area() << endl;

    shape = &r;
    cout << "Rectangle Area: " << shape->area() << endl;

    return 0;
}
