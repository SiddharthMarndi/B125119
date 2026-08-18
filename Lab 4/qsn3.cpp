#include <iostream>
#include <string>
using namespace std;

class ParkingSlot {
private:
    int slotNumber;
    string vehicleNumber;
    bool isOccupied;

public:
    ParkingSlot(int slot, string vehicle, bool status) {
        slotNumber = slot;
        vehicleNumber = vehicle;
        isOccupied = status;
    }

    friend void checkSlot(const ParkingSlot& ps);
};

void checkSlot(const ParkingSlot& ps) {
    cout << "\nParking Slot Status" << endl;
    cout << "Slot Number      : " << ps.slotNumber << endl;
    
    if (ps.isOccupied) {
        cout << "Status           : Occupied" << endl;
        cout << "Vehicle Number   : " << ps.vehicleNumber << endl;
    } else {
        cout << "Status           : Available" << endl;
    }
}

int main() {
    int slot;
    int choice;
    string vehicle = "";

    cout << "Enter Slot Number: ";
    cin >> slot;

    cout << "Is the slot occupied? (1 for Yes, 0 for No): ";
    cin >> choice;
    cin.ignore();

    bool isOccupied = (choice == 1);

    if (isOccupied) {
        cout << "Enter Vehicle Number: ";
        getline(cin, vehicle);
    }

    ParkingSlot mySlot(slot, vehicle, isOccupied);
    checkSlot(mySlot);

    return 0;
}