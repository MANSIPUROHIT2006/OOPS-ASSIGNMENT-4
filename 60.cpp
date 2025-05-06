// Write a class Box with a member function that returns the current object using the this pointer.

#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}
    
    Box& setLength(double l) {
        this->length = l;
        return *this;  // Returning the current object
    }

    Box& setWidth(double w) {
        this->width = w;
        return *this;  // Returning the current object
    }

    Box& setHeight(double h) {
        this->height = h;
        return *this;  // Returning the current object
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box b(5, 4, 3);
    b.setLength(7).setWidth(6).setHeight(8);  // Chaining member functions
    b.display();
    
    return 0;
}
