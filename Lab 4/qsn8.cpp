#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;

public:
    TrainSeat(int seatNum, string name, bool status) {
        seatNumber = seatNum;
        passengerName = name;
        isBooked = status;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void checkSeatStatus(const TrainSeat& ts) {
        cout << "Train Seat Status" << endl;
        cout << "Seat Number    : " << ts.seatNumber << endl;

        if (ts.isBooked) {
            cout << "Booking Status : Booked" << endl;
            cout << "Passenger Name : " << ts.passengerName << endl;
        } else {
            cout << "Booking Status : Available" << endl;
        }
    }
};

int main() {
    int seatNum;
    int choice;
    string name = "";

    cout << "Enter Seat Number: ";
    cin >> seatNum;

    cout << "Is the seat booked? (1 for Yes, 0 for No): ";
    cin >> choice;
    cin.ignore();

    bool isBooked = (choice == 1);

    if (isBooked) {
        cout << "Enter Passenger Name: ";
        getline(cin, name);
    }

    TrainSeat seat(seatNum, name, isBooked);
    TicketChecker tc;

    tc.checkSeatStatus(seat);

    return 0;
}