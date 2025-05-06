 // Implement a program that demonstrates the use of multiple catch blocks to handle different types of exceptions.

#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for division by zero, 2 for array out of bounds: ";
        cin >> choice;
        
        if (choice == 1) {
            int num = 10, denom = 0;
            if (denom == 0) {
                throw "Division by zero error!";
            }
            cout << "Result: " << num / denom << endl;
        } else if (choice == 2) {
            int arr[] = {1, 2, 3};
            cout << arr[5] << endl;  // Array out of bounds
        }
    } catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    } catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }
    
    return 0;
}
