// Create a class Counter with a member function that compares two objects using the this pointer.

#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter(int c) : count(c) {}

    void compare(Counter& other) {
        if (this->count == other.count) {
            cout << "Both counters have the same value." << endl;
        } else {
            cout << "Counters have different values." << endl;
        }
    }
};

int main() {
    Counter c1(5), c2(10);
    c1.compare(c2);  // Comparing two objects
    
    return 0;
}
