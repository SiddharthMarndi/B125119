#include <iostream>
using namespace std;

class ElectricityBill {
    public:
        int consumerNumber;
        char consumerName[50];
        double units;
        double totalBill;
        void accept();
        void calculateBill();
        void display();
};

void ElectricityBill::accept() {
    cout << "Enter Consumer Number:";
    cin >> consumerNumber;
    cout << "Enter Consumer Name:";
    cin >> consumerName;
    cout << "Enter Units Consumed:";
    cin >> units;
}

void ElectricityBill::calculateBill() {
    if (units <= 100) {
        totalBill = units * 5;
    } else if (units <= 200) {
        totalBill = (100 * 5) + ((units - 100) * 7);
    } else {
        totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
}

void ElectricityBill::display() {
    cout << "THE ELECTRICITY BILL DETAILS ARE:\n";
    cout << "Consumer Number:" << consumerNumber << "\n";
    cout << "Consumer Name:" << consumerName << "\n";
    cout << "Units Consumed:" << units << "\n";
    cout << "Total Bill Amount: " << totalBill << "\n";
}

int main() {
    ElectricityBill b1;
    b1.accept();
    b1.calculateBill();
    b1.display();
}