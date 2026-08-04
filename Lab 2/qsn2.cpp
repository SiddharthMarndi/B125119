#include <iostream>
using namespace std;

class Rectangle {
    public:
        double length;
        double breadth;
        void accept();
        double calculateArea();
        double calculatePerimeter();
        void display();
};

void Rectangle::accept() {
    cout << "Enter length:";
    cin >> length;
    cout << "Enter breadth:";
    cin >> breadth;
}

double Rectangle::calculateArea() {
    return length * breadth;
}

double Rectangle::calculatePerimeter() {
    return 2 * (length + breadth);
}

void Rectangle::display() {
    cout << "THE RECTANGLE'S DATA ARE:\n";
    cout << "Length:" << length << "\n";
    cout << "Breadth:" << breadth << "\n";
    cout << "Area:" << calculateArea() << "\n";
    cout << "Perimeter:" << calculatePerimeter() << "\n";
}

int main() {
    Rectangle r1;
    r1.accept();
    r1.display();
}