#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string regNumber;
    int rentalDays;
public:
    Vehicle(string reg, int days) {
        regNumber = reg;
        rentalDays = days;
    }
};

class Car : public Vehicle {
protected:
    double dailyRate;
public:
    Car(string reg, int days, double rate) : Vehicle(reg, days) {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car {
private:
    double luxuryCharge;
public:
    LuxuryCar(string reg, int days, double rate, double charge) : Car(reg, days, rate) {
        luxuryCharge = charge;
    }
    void displayTotalCost() {
        double totalCost = (dailyRate + luxuryCharge) * rentalDays;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Total Rental Cost: " << totalCost << endl;
    }
};

int main() {
    LuxuryCar lc("OD02AB1234", 5, 2000.0, 500.0);
    lc.displayTotalCost();
    return 0;
}