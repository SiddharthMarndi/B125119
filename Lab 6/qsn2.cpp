#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    cout << "Enter Complex Number 1:\n";
    c1.input();
    cout << "Enter Complex Number 2:\n";
    c2.input();
    c3 = c1 - c2;
    cout << "Result: ";
    c3.display();
    return 0;
}