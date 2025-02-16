NAME;MERCY KIRIMI
ADMISSION;BSCIT-05-0047/2024

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }
       // Setter for accountHolder
    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance with validation
    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
        } else {
            cout << "Balance cannot be negative!" << endl;
         }
    }
};

int main() {
    BankAccount myAccount("John Doe", 1000.50);

    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;

    return 0;
    
	}


