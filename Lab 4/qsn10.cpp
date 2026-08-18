#include <iostream>
#include <string>

using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    SmartDevice(string name, string type, bool status = false) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayDeviceInfo(const SmartDevice& d) {
        cout << "Smart Device Details" << endl;
        cout << "Device Name  : " << d.deviceName << endl;
        cout << "Device Type  : " << d.deviceType << endl;
        cout << "Power Status : " << (d.powerStatus ? "ON" : "OFF") << endl;
    }

    void turnOn(SmartDevice& d) {
        d.powerStatus = true;
        cout << "\n[Notification] " << d.deviceName << " has been turned ON." << endl;
    }

    void turnOff(SmartDevice& d) {
        d.powerStatus = false;
        cout << "\n[Notification] " << d.deviceName << " has been turned OFF." << endl;
    }

    void displayPowerStatus(const SmartDevice& d) {
        cout << "Current Power Status" << endl;
        cout << d.deviceName << " is currently: " << (d.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    string name, type;
    int initialStatus;

    cout << "Enter Device Name: ";
    getline(cin, name);

    cout << "Enter Device Type (e.g., Light, AC, Fan): ";
    getline(cin, type);

    cout << "Initial Power Status (1 for ON, 0 for OFF): ";
    cin >> initialStatus;

    SmartDevice device(name, type, initialStatus == 1);
    HomeController controller;

    controller.displayDeviceInfo(device);
    controller.turnOn(device);
    controller.displayPowerStatus(device);
    controller.turnOff(device);
    controller.displayPowerStatus(device);

    return 0;
}