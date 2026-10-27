#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled Robot Travel Time: "
             << distance / 2.0 << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked Robot Travel Time: "
             << distance / 1.2 << " seconds" << endl;
    }
};

int main() {


    WheeledRobot w;
    TrackedRobot t;

    Robot *r;

    r = &w;
    r->move(50);

    r = &t;
    r->move(50);

    return 0;
}