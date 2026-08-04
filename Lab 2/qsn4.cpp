#include <iostream>
using namespace std;

class BankAccount {
    public:
        int accountNumber;
        char accountHolderName[50];
        double balance;
        void accept();
        void deposit();
        void withdraw();
        void display();
};

void BankAccount::accept() {
    cout << "Enter account number:";
    cin >> accountNumber;
    cout << "Enter account holder name:";
    cin >> accountHolderName;
    cout << "Enter initial balance:";
    cin >> balance;
}

void BankAccount::deposit() {
    double amount;
    cout << "Enter deposit amount:";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    } else {
        cout << "Invalid deposit amount.\n";
    }
}

void BankAccount::withdraw() {
    double amount;
    cout << "Enter withdrawal amount:";
    cin >> amount;
    if (amount > balance) {
        cout << "Error! Insufficient balance for withdrawal.\n";
    } else if (amount <= 0) {
        cout << "Invalid withdrawal amount.\n";
    } else {
        balance -= amount;
        cout << "Amount withdrawn successfully.\n";
    }
}

void BankAccount::display() {
    cout << "THE BANK ACCOUNT DETAILS ARE:\n";
    cout << "Account Number:" << accountNumber << "\n";
    cout << "Account Holder Name:" << accountHolderName << "\n";
    cout << "Available Balance:" << balance << "\n";
}

int main() {
    BankAccount b1;
    b1.accept();
    b1.deposit();
    b1.withdraw();
    b1.display();
}