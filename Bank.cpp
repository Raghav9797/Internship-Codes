/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BankAccount
{
private:
    int balance;
    int accountNumber;

public:
    BankAccount(int accNum, int initial_balance = 0)
        : accountNumber(accNum), balance(initial_balance) {}

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << " to account " << accountNumber << endl;
        }
        else
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrew: $" << amount << " from account " << accountNumber << endl;
            }
            else
            {
                cout << "Insufficient funds in account " << accountNumber << endl;
            }
        }
        else
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    void check_balance() const
    {
        cout << "Current balance in account " << accountNumber << ": $" << balance << endl;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }
};

void displayMenu()
{
    cout << "\nBank Menu:\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}*/
