 // Write a function template to perform a linear search on an array of any data type.

#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index if key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int arrInt[] = {1, 2, 3, 4, 5};
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4};
    
    int intResult = linearSearch(arrInt, 5, 3);
    double doubleResult = linearSearch(arrDouble, 4, 3.3);

    if (intResult != -1) {
        cout << "Found integer at index " << intResult << endl;
    } else {
        cout << "Integer not found" << endl;
    }

    if (doubleResult != -1) {
        cout << "Found double at index " << doubleResult << endl;
    } else {
        cout << "Double not found" << endl;
    }

    return 0;
}
