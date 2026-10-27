#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) {
    }
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20.0) * 60 + 5;
        cout << "Bike Delivery Time: " << time << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40.0) * 60 + 2;
        cout << "Drone Delivery Time: " << time << " minutes" << endl;
    }
};

int main() {

    BikeDelivery b;
    DroneDelivery d;

    b.estimateTime(50);
    d.estimateTime(50);

    return 0;
}