// Implement an abstract class Payment with a pure virtual function processPayment(). Create derived classes CreditCardPayment and DebitCardPayment.

#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;  // Pure virtual function
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing Credit Card Payment." << endl;
    }
};

class DebitCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing Debit Card Payment." << endl;
    }
};

int main() {
    Payment* payment;

    CreditCardPayment creditPayment;
    DebitCardPayment debitPayment;

    payment = &creditPayment;
    payment->processPayment();  // CreditCardPayment's processPayment

    payment = &debitPayment;
    payment->processPayment();  // DebitCardPayment's processPayment

    return 0;
}
