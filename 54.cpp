 // Write a program to demonstrate pointer arithmetic by creating an array and accessing its elements using pointers.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;
    
    // Accessing array elements using pointer arithmetic
    cout << "First element: " << *ptr << endl;  // 10
    ptr++;
    cout << "Second element: " << *ptr << endl;  // 20
    ptr++;
    cout << "Third element: " << *ptr << endl;  // 30
    ptr++;
    cout << "Fourth element: " << *ptr << endl;  // 40
    ptr++;
    cout << "Fifth element: " << *ptr << endl;  // 50

    return 0;
}
