#include <iostream>
using namespace std;

class ParkingSlot {
public:
    virtual void calculateFee(int hours) {
    }
};

class TwoWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 10.0;

        if (hours > 5) {
            fee *= 0.9;
        }

        cout << "Two Wheeler Fee: Rs. " << fee << endl;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    void calculateFee(int hours) override {
        double fee = hours * 30.0;

        if (hours > 5) {
            fee *= 0.9;
        }

        cout << "Four Wheeler Fee: Rs. " << fee << endl;
    }
};

int main() {

    TwoWheelerSlot t;
    FourWheelerSlot f;

    t.calculateFee(4);
    f.calculateFee(4);

    return 0;
}