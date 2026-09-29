#include <iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    void input() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }
    bool operator==(const Date& d) {
        return (day == d.day && month == d.month && year == d.year);
    }
};

int main() {
    Date d1, d2;
    cout << "Enter Date 1:\n";
    d1.input();
    cout << "Enter Date 2:\n";
    d2.input();
    if (d1 == d2) {
        cout << "Both dates are equal." << endl;
    } else {
        cout << "Dates are not equal." << endl;
    }
    return 0;
}