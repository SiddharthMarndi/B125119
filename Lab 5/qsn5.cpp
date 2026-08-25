#include <iostream>

using namespace std;

class ValueModifier {
public:
    int modify(int value, int toAdd) {
        return value + toAdd;
    }

    double modify(double value, double toAdd) {
        return value + toAdd;
    }

    void modify(int* ptr, int newValue) {
        if (ptr != nullptr) {
            *ptr = newValue;
        }
    }
};

int main() {
    ValueModifier vm;

    int intVal, intAdd;
    cout << "Enter an integer value: ";
    cin >> intVal;
    cout << "Enter value to add to the integer: ";
    cin >> intAdd;

    cout << "Integer before modification: " << intVal << endl;
    int modifiedInt = vm.modify(intVal, intAdd);
    cout << "Integer after modification: " << modifiedInt << endl;

    double floatVal, floatAdd;
    cout << "\nEnter a floating-point value: ";
    cin >> floatVal;
    cout << "Enter value to add to the floating-point number: ";
    cin >> floatAdd;

    cout << "Floating-point before modification: " << floatVal << endl;
    double modifiedFloat = vm.modify(floatVal, floatAdd);
    cout << "Floating-point after modification: " << modifiedFloat << endl;

    int ptrVal, newDirectVal;
    cout << "\nEnter an integer value to modify via pointer: ";
    cin >> ptrVal;
    cout << "Enter the new value to assign using pointer: ";
    cin >> newDirectVal;

    cout << "Value before pointer modification: " << ptrVal << endl;
    vm.modify(&ptrVal, newDirectVal);
    cout << "Value after pointer modification: " << ptrVal << endl;

    return 0;
}