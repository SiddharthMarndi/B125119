#include <iostream>
using namespace std;
int main() {
    int* p = new int;
    cout << "Enter integer: ";
    cin >> *p;
    cout << "Value: " << *p << endl;
    delete p;
    return 0;
}