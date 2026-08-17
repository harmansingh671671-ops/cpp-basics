#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string account_number;
    string account_holder;
    double balance;

public:
    BankAccount(string acc_num, string acc_holder, double initial_balance = 0.0) {
        account_number = acc_num;
        account_holder = acc_holder;
        balance = initial_balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful. Balance: " << balance << endl;
        } else {
            cout << "Error: Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Error: Withdrawal amount must be positive." << endl;
        } else if (amount > balance) {
            cout << "Error: Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal Successful. Balance: " << balance << endl;
        }
    }

    void display_summary() const {
        cout << "Account: " << account_number 
             << " | Holder: " << account_holder 
             << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("ACC1001", "Alice", 500.0);
    acc.deposit(200);
    acc.withdraw(100);
    acc.display_summary();
    return 0;
}