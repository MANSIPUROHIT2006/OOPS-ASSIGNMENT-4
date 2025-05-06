// Create a base class Animal with a virtual function speak(). Implement derived classes Dog, Cat, and Bird, each overriding the speak() function.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

class Bird : public Animal {
public:
    void speak() override {
        cout << "Tweet!" << endl;
    }
};

int main() {
    Animal* animal;
    
    Dog d;
    Cat c;
    Bird b;
    
    animal = &d;
    animal->speak();
    
    animal = &c;
    animal->speak();
    
    animal = &b;
    animal->speak();
    
    return 0;
}
