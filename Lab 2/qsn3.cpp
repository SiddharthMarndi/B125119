#include <iostream>
using namespace std;

class Calculator {
    public:
        double num1;
        double num2;
        void accept();
        void add();
        void subtract();
        void multiply();
        void divide();
        void display();
};

void Calculator::accept() {
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
}

void Calculator::add() {
    cout << "Addition:" << num1 + num2 << "\n";
}

void Calculator::subtract() {
    cout << "Subtraction:" << num1 - num2 << "\n";
}

void Calculator::multiply() {
    cout << "Multiplication:" << num1 * num2 << "\n";
}

void Calculator::divide() {
    if (num2 != 0) {
        cout << "Division:" << num1 / num2 << "\n";
    } else {
        cout << "Division: Error! Division by zero is not allowed.\n";
    }
}

void Calculator::display() {
    cout << "THE CALCULATOR RESULTS ARE:\n";
    add();
    subtract();
    multiply();
    divide();
}

int main() {
    Calculator c1;
    c1.accept();
    c1.display();
}