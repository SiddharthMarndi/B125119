#include <iostream>
using namespace std;

class Door {
private:
    int doorNumber;
    bool isLocked;

public:
    Door(int num, bool locked) {
        doorNumber = num;
        isLocked = locked;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkDoorStatus(const Door& d) {
        cout << "Security System Report" << endl;
        cout << "Door Number : " << d.doorNumber << endl;
        
        if (d.isLocked) {
            cout << "Status      : Locked" << endl;
        } else {
            cout << "Status      : Unlocked" << endl;
        }
    }
};

int main() {
    int doorNum;
    int choice;

    cout << "Enter Door Number: ";
    cin >> doorNum;

    cout << "Is the door locked? (1 for Yes, 0 for No): ";
    cin >> choice;

    bool isLocked = (choice == 1);

    Door myDoor(doorNum, isLocked);
    SecuritySystem sys;

    sys.checkDoorStatus(myDoor);

    return 0;
}