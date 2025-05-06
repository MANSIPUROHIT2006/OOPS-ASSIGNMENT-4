 // Implement a program that uses the this pointer to chain member function calls in a class Person.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    Person& setName(string n) {
        this->name = n;
        return *this;  // Returning the current object to chain functions
    }

    Person& setAge(int a) {
        this->age = a;
        return *this;  // Returning the current object to chain functions
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p("John", 25);
    p.setName("Alice").setAge(30);  // Chaining member function calls
    p.display();
    
    return 0;
}
