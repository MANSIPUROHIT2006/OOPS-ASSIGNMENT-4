// Write a program that creates a dynamic object of a class Student and accesses its members using pointers.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student* s = new Student("John Doe", 20);  // Dynamic object
    s->display();  // Accessing member using pointer
    delete s;  // Deleting dynamically allocated memory
    return 0;
}
