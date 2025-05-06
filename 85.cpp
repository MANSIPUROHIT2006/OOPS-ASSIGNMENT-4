// Implement a program that demonstrates the use of smart pointers for dynamic memory management.

#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor Called\n"; }
    void show() { cout << "Smart Pointer Example\n"; }
    ~Demo() { cout << "Destructor Called\n"; }
};

int main() {
    shared_ptr<Demo> ptr = make_shared<Demo>();
    ptr->show();

    return 0;
}
