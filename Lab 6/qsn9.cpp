#include <iostream>
using namespace std;

class Temperature {
    float temp;
public:
    void input() {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
    }
    bool operator<(const Temperature& t) {
        return temp < t.temp;
    }
    bool operator>(const Temperature& t) {
        return temp > t.temp;
    }
};

int main() {
    Temperature t1, t2;
    cout << "Enter Temperature 1:\n";
    t1.input();
    cout << "Enter Temperature 2:\n";
    t2.input();
    if (t1 < t2) {
        cout << "First temperature is lower than the second." << endl;
    } else if (t1 > t2) {
        cout << "First temperature is higher than the second." << endl;
    } else {
        cout << "Both temperatures are equal." << endl;
    }
    return 0;
}