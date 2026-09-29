#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter() {
        value = 0;
    }
    Counter(int v) {
        value = v;
    }
    void input() {
        cout << "Enter counter value: ";
        cin >> value;
    }
    void display() {
        cout << value << endl;
    }
    friend Counter operator++(Counter& c);
    friend Counter operator++(Counter& c, int);
};

Counter operator++(Counter& c) {
    ++c.value;
    return c;
}

Counter operator++(Counter& c, int) {
    Counter temp = c;
    c.value++;
    return temp;
}

int main() {
    Counter c;
    c.input();
    cout << "Initial value: ";
    c.display();
    cout << "After prefix (++c): ";
    Counter c1 = ++c;
    c1.display();
    cout << "After postfix (c++): ";
    Counter c2 = c++;
    c2.display();
    cout << "Value after postfix operation: ";
    c.display();
    return 0;
}