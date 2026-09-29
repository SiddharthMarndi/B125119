#include <iostream>
using namespace std;

class Number {
    int val;
public:
    Number() {
        val = 0;
    }
    Number(int v) {
        val = v;
    }
    void input() {
        cout << "Enter integer value: ";
        cin >> val;
    }
    Number operator-() {
        return Number(-val);
    }
    void display() {
        cout << val << endl;
    }
};

int main() {
    Number n1;
    cout << "Enter Number:\n";
    n1.input();
    Number n2 = -n1;
    cout << "n1: ";
    n1.display();
    cout << "n2: ";
    n2.display();
    return 0;
}