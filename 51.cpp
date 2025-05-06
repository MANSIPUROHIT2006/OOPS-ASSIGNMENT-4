 // Implement a base class Shape with derived classes Circle, Rectangle, and Triangle. Use virtual functions to calculate the area of each shape.

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0;  // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shape;
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);
    
    shape = &c;
    cout << "Area of Circle: " << shape->calculateArea() << endl;
    
    shape = &r;
    cout << "Area of Rectangle: " << shape->calculateArea() << endl;
    
    shape = &t;
    cout << "Area of Triangle: " << shape->calculateArea() << endl;

    return 0;
}
