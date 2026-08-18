#include <iostream>
#include <string>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    Mobile(string b, string m, int battery) {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(const Mobile& phone);
};

void checkBattery(const Mobile& phone) {
    cout << "\nMobile Phone Details" << endl;
    cout << "Brand              : " << phone.brand << endl;
    cout << "Model              : " << phone.model << endl;
    cout << "Battery Percentage : " << phone.batteryPercentage << "%" << endl;

    if (phone.batteryPercentage < 20) {
        cout << "Status             : Battery Low" << endl;
    } else {
        cout << "Status             : Battery Normal" << endl;
    }
}

int main() {
    string brand;
    string model;
    int battery;

    cout << "Enter Mobile Brand: ";
    getline(cin, brand);

    cout << "Enter Mobile Model: ";
    getline(cin, model);

    cout << "Enter Battery Percentage: ";
    cin >> battery;

    Mobile myPhone(brand, model, battery);

    checkBattery(myPhone);

    return 0;
}