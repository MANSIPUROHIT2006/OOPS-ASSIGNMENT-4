 // Create a function template to find the maximum of two values of any data type.

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 5 and 9: " << findMax(5, 9) << endl;
    cout << "Max of 4.4 and 2.2: " << findMax(4.4, 2.2) << endl;
    cout << "Max of 'a' and 'z': " << findMax('a', 'z') << endl;
    return 0;
}
