// Program using function pointers to implement a callback mechanism

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from the greet function!" << endl;
}

void farewell() {
    cout << "Goodbye from the farewell function!" << endl;
}

void callback(void (*func)()) {
    func(); // calling the passed function
}

int main() {
    callback(greet);
    callback(farewell);
    return 0;
}
