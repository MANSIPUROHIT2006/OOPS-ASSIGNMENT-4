 // Create a class Account with a pure virtual function calculateInterest(). Implement derived classes SavingsAccount and CurrentAccount.

#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() = 0;  // Pure virtual function
};

class SavingsAccount : public Account {
private:
    double balance;
public:
    SavingsAccount(double b) : balance(b) {}
    
    void calculateInterest() override {
        cout << "Interest for Savings Account: " << balance * 0.04 << endl;
    }
};

class CurrentAccount : public Account {
private:
    double balance;
public:
    CurrentAccount(double b) : balance(b) {}

    void calculateInterest() override {
        cout << "Interest for Current Account: " << balance * 0.02 << endl;
    }
};

int main() {
    Account* acc;
    
    SavingsAccount s(1000);
    CurrentAccount c(1000);
    
    acc = &s;
    acc->calculateInterest();  // SavingsAccount's calculateInterest
    
    acc = &c;
    acc->calculateInterest();  // CurrentAccount's calculateInterest
    
    return 0;
}
