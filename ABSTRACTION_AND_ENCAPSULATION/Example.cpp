#include <iostream>
#include <string>
using namespace std;

// Class declaration
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Member functions
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient funds or invalid amount for withdrawal." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // Create a bank account object
    BankAccount myAccount("123456789", 1000.0);

    // Perform operations
    myAccount.displayBalance(); // Initial balance
    myAccount.deposit(500.0);   // Deposit
    myAccount.withdraw(200.0);  // Withdraw
    myAccount.displayBalance(); // Updated balance

    return 0;
}

