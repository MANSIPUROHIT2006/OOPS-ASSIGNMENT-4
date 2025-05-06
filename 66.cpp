 // Write a program that demonstrates polymorphism using a base class Media and derived classes Book and DVD.

#include <iostream>
using namespace std;

class Media {
public:
    virtual void displayInfo() {
        cout << "This is a media item." << endl;
    }
};

class Book : public Media {
public:
    void displayInfo() override {
        cout << "This is a Book." << endl;
    }
};

class DVD : public Media {
public:
    void displayInfo() override {
        cout << "This is a DVD." << endl;
    }
};

int main() {
    Media* media;
    
    Book b;
    DVD d;
    
    media = &b;
    media->displayInfo();  // Book's displayInfo
    
    media = &d;
    media->displayInfo();  // DVD's displayInfo
    
    return 0;
}
