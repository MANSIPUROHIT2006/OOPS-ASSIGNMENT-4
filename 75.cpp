 // Write a program that uses exception handling to manage file input/output errors.

#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

void openFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        throw runtime_error("File not found!");
    }
    cout << "File opened successfully!" << endl;
    file.close();
}

int main() {
    string filename = "nonexistent.txt";

    try {
        openFile(filename);
    } catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
