#include <iostream>
using namespace std;

int main() {
    int parcels = 50;
    int *ptr = &parcels;
    int add;

    cout << "Initial parcels delivered: " << *ptr << endl;
    cout << "Enter additional parcels delivered: ";
    cin >> add;

    *ptr += add;

    cout << "Updated parcels delivered: " << *ptr << endl;

    return 0;
}
