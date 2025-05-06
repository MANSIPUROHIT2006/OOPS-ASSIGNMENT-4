 // Program using class templates and exception handling for a generic and robust data structure

#include <iostream>
using namespace std;

template <typename T>
class SafeArray {
    T* arr;
    int size;

public:
    SafeArray(int s) {
        if (s <= 0)
            throw invalid_argument("Size must be positive");
        size = s;
        arr = new T[size];
    }

    T& operator[](int index) {
        if (index < 0 || index >= size)
            throw out_of_range("Index out of range");
        return arr[index];
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    ~SafeArray() {
        delete[] arr;
    }
};

int main() {
    try {
        SafeArray<int> a(5);
        for (int i = 0; i < 5; i++)
            a[i] = i * 10;
        a.display();

        // Uncommenting below will throw exception
        // cout << a[5];
    } catch (exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
