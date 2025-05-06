 // Implement a program that dynamically allocates memory for an integer array and initializes it using pointers.

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* arr = new int[n];  // Dynamically allocating memory

    // Initializing array elements using pointer
    for (int i = 0; i < n; i++) {
        *(arr + i) = (i + 1) * 10;
    }

    // Printing array elements
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;  // Deleting dynamically allocated memory
    return 0;
}
