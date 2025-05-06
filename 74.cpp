 // Create a custom exception class InvalidAgeException and use it to handle invalid age input in a program.

#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age entered! Age must be positive.";
    }
};

void validateAge(int age) {
    if (age < 0) {
        throw InvalidAgeException();
    }
}

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        validateAge(age);
        cout << "Age is valid: " << age << endl;
    } catch (const InvalidAgeException& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
