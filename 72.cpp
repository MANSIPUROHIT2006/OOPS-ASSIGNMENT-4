// Write a program that handles division by zero using exception handling.

#include <iostream>
using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error!";
    }
    return numerator / denominator;
}

int main() {
    try {
        int num = 10, denom = 0;
        int result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    
    return 0;
}
