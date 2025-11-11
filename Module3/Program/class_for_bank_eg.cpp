#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(1000);  

    acc.deposit(500);
    acc.withdraw(200);

    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}

