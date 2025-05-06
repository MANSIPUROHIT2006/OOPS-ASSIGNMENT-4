 // Write a program that uses pure virtual functions to create an abstract class Vehicle with derived classes Car and Bike.

#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void display() = 0;  // Pure virtual function
};

class Car : public Vehicle {
public:
    void display() override {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void display() override {
        cout << "This is a Bike." << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Bike();

    vehicle1->display();  // Calling Car's display function
    vehicle2->display();  // Calling Bike's display function
    
    delete vehicle1;
    delete vehicle2;
    return 0;
}
