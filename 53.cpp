 // Write a program that demonstrates function overriding using a base class Employee and derived classes Manager and Worker.

#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working!" << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager managing team!" << endl;
    }
};

class Worker : public Employee {
public:
    void work() override {
        cout << "Worker working on task!" << endl;
    }
};

int main() {
    Employee* emp;
    
    Manager m;
    Worker w;
    
    emp = &m;
    emp->work();
    
    emp = &w;
    emp->work();
    
    return 0;
}

