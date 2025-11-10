#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount(double initialBalance = 0) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!\n";
    }
    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    return 0;
}
