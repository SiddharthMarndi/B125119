#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int firstInningsScore) {
    }
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.01);
        cout << "T20 Target: " << firstInningsScore + margin << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int firstInningsScore) override {
        int margin = ceil(firstInningsScore * 0.02);
        cout << "ODI Target: " << firstInningsScore + margin << endl;
    }
};

int main() {


    T20Match t;
    ODIMatch o;

    t.calculateTarget(100);
    o.calculateTarget(100);

    return 0;
}