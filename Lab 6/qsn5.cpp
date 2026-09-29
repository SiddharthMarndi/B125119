#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;
public:
    Time() {
        hours = 0;
        minutes = 0;
    }
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
    Time operator+(const Time& t) {
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        if (temp.minutes >= 60) {
            temp.hours += temp.minutes / 60;
            temp.minutes %= 60;
        }
        return temp;
    }
    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "Enter Time 1:\n";
    t1.input();
    cout << "Enter Time 2:\n";
    t2.input();
    t3 = t1 + t2;
    cout << "Result: ";
    t3.display();
    return 0;
}