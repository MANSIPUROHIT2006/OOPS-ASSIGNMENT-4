// Create a class template Queue with member functions to enqueue, dequeue, and display elements.

#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T* arr;
    int front, rear, capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new T[capacity];
        front = rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(T value) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
I
