 // Create a program that demonstrates the use of a pointer to an object in a class member function.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string n) : name(n) {}
    void display() {
        cout << "Name: " << name << endl;
    }
    void setName(string newName) {
        name = newName;
    }
};

int main() {
    Person* p = new Person("Alice");  // Dynamic object
    p->display();  // Accessing member function using pointer
    
    p->setName("Bob");  // Modifying member using pointer
    p->display();
    
    delete p;  // Deleting dynamically allocated object
    return 0;
}
