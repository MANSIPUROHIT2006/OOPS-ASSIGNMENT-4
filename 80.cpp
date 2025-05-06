// Write a class template LinkedList with member functions to insert, delete, and display nodes.

#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(T val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void deleteNode(T val) {
        Node *temp = head, *prev = nullptr;
        while (temp && temp->data != val) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) return;

        if (!prev)
            head = head->next;
        else
            prev->next = temp->next;

        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList<int> list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();

    list.deleteNode(20);
    list.display();

    return 0;
}
