// Create a program that uses a pointer to swap the values of two variables.


#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    
    swap(&x, &y);
    
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
