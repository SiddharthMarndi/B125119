#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    Distance() {
        feet = 0;
        inches = 0;
    }
    
    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    Distance operator+(const Distance& d) {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches %= 12;
        }
        return temp;
    }
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1, d2, d3;
    cout << "Enter Distance 1:\n";
    d1.input();
    cout << "Enter Distance 2:\n";
    d2.input();
    d3 = d1 + d2;
    cout << "Result: ";
    d3.display();
    return 0;
}