 // Implement a class hierarchy with a base class Appliance and derived classes WashingMachine, Refrigerator, and Microwave. Use virtual functions to display the functionality of each appliance.

#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void functionality() {
        cout << "This is an appliance." << endl;
    }
};

class WashingMachine : public Appliance {
public:
    void functionality() override {
        cout << "Washing clothes." << endl;
    }
};

class Refrigerator : public Appliance {
public:
    void functionality() override {
        cout << "Cooling food and drinks." << endl;
    }
};

class Microwave : public Appliance {
public:
    void functionality() override {
        cout << "Heating food." << endl;
    }
};

int main() {
    Appliance* appliance;

    WashingMachine wm;
    Refrigerator rf;
    Microwave mw;

    appliance = &wm;
    appliance->functionality();  // WashingMachine's functionality

    appliance = &rf;
    appliance->functionality();  // Refrigerator's functionality

    appliance = &mw;
    appliance->functionality();  // Microwave's functionality

    return 0;
}
