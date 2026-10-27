#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Drip Irrigation Water: "
             << 2 * (100 - moisture) << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Sprinkler Irrigation Water: "
             << 3 * (100 - moisture) << " litres" << endl;
    }
};

int main() {

    DripIrrigation d;
    SprinklerIrrigation s;

    d.calculateWater(10);
    s.calculateWater(10);

    return 0;
}