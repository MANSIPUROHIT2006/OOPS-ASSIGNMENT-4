// .Write a program that uses polymorphism to create a menu-driven application for managing different types of bank accounts.

 #include <iostream>
using namespace std;

class BankAccount {
public:
    virtual void createAccount() = 0;
    virtual void displayAccount() = 0;
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
    string name;
    float balance;
public:
    void createAccount() override {
        cout << "Enter Savings Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void displayAccount() override {
        cout << "Savings Account - Name: " << name << ", Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
    string name;
    float balance;
public:
    void createAccount() override {
        cout << "Enter Current Account Holder Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void displayAccount() override {
        cout << "Current Account - Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount* account;
    int choice;
    do {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Create Savings Account\n2. Create Current Account\n3. Display Account\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account = new SavingsAccount();
            account->createAccount();
            break;
        case 2:
            account = new CurrentAccount();
            account->createAccount();
            break;
        case 3:
            if (account)
                account->displayAccount();
            else
                cout << "No account created yet.\n";
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    delete account;
    return 0;
}
