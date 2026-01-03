#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Function to create account
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    // Function to deposit money
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    // Function to withdraw money
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
    }

    // Function to display account details
    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    account.createAccount();

    do {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.deposit();
            break;
        case 2:
            account.withdraw();
            break;
        case 3:
            account.display();
            break;
        case 4:
            cout << "Thank you for using the Banking System!\n";
            break;
        default:
            cout << "Invalid Choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}

