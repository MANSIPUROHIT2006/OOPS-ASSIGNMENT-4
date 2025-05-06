// Write a program that demonstrates the use of virtual inheritance to avoid the diamond problem in multiple inheritance.

#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A\n";
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.display();  // No ambiguity due to virtual inheritance
    return 0;
}
