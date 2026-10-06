#include <iostream>
#include <string>

using namespace std;

class BankAccount {
protected:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(int accNo, double bal, double rate) : BankAccount(accNo, bal) {
        interestRate = rate;
    }
    void updateBalance() {
        balance += balance * (interestRate / 100.0);
        cout << "Savings Account (" << accountNumber << ") Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minBalance;
    double maintenanceCharge;
public:
    CurrentAccount(int accNo, double bal, double minBal, double charge) : BankAccount(accNo, bal) {
        minBalance = minBal;
        maintenanceCharge = charge;
    }
    void updateBalance() {
        if (balance < minBalance) {
            balance -= maintenanceCharge;
        }
        cout << "Current Account (" << accountNumber << ") Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount sa(8888, 10000.0, 5.0);
    CurrentAccount ca(9999, 3000.0, 5000.0, 200.0);
    sa.updateBalance();
    ca.updateBalance();
    return 0;
}