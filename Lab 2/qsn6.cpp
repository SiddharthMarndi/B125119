#include <iostream>
using namespace std;

class Distance {
    public:
        int feet;
        int inches;
        void accept();
        void addDistance(Distance d1, Distance d2);
        void display();
};

void Distance::accept() {
    cout << "Enter feet:";
    cin >> feet;
    cout << "Enter inches:";
    cin >> inches;
}

void Distance::addDistance(Distance d1, Distance d2) {
    inches = d1.inches + d2.inches;
    feet = d1.feet + d2.feet + (inches / 12);
    inches = inches % 12;
}

void Distance::display() {
    cout << feet << " ft " << inches << " in\n";
}

int main() {
    Distance d1, d2, d3;
    cout << "Enter first distance:\n";
    d1.accept();
    cout << "Enter second distance:\n";
    d2.accept();
    d3.addDistance(d1, d2);
    cout << "THE TOTAL DISTANCE IS:\n";
    d3.display();
}