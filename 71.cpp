// Create an abstract class Device with a pure virtual function turnOn(). Implement derived classes Laptop and Smartphone.

#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn() = 0;  // Pure virtual function
};

class Laptop : public Device {
public:
    void turnOn() override {
        cout << "Turning on the Laptop." << endl;
    }
};

class Smartphone : public Device {
public:
    void turnOn() override {
        cout << "Turning on the Smartphone." << endl;
    }
};

int main() {
    Device* device;

    Laptop laptop;
    Smartphone smartphone;

    device = &laptop;
    device->turnOn();  // Laptop's turnOn

    device = &smartphone;
    device->turnOn();  // Smartphone's turnOn

    return 0;
}
