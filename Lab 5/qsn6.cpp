#include <iostream>

using namespace std;

class DataDisplay {
public:
    void display(int value) {
        cout << "Integer value: " << value << endl;
    }

    void display(double value) {
        cout << "Floating-point value: " << value << endl;
    }

    void display(char value) {
        cout << "Character value: " << value << endl;
    }

    void display(const int arr[], int size) {
        cout << "Integer array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void display(const char arr[], int size) {
        cout << "Character array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DataDisplay dd;

    int intVal;
    cout << "Enter an integer: ";
    cin >> intVal;
    dd.display(intVal);

    double floatVal;
    cout << "\nEnter a floating-point number: ";
    cin >> floatVal;
    dd.display(floatVal);

    char charVal;
    cout << "\nEnter a character: ";
    cin >> charVal;
    dd.display(charVal);

    int intArrSize;
    cout << "\nEnter size of integer array: ";
    cin >> intArrSize;
    int* intArr = new int[intArrSize];
    cout << "Enter integer array elements: ";
    for (int i = 0; i < intArrSize; i++) {
        cin >> intArr[i];
    }
    dd.display(intArr, intArrSize);

    int charArrSize;
    cout << "\nEnter size of character array: ";
    cin >> charArrSize;
    char* charArr = new char[charArrSize];
    cout << "Enter character array elements: ";
    for (int i = 0; i < charArrSize; i++) {
        cin >> charArr[i];
    }
    dd.display(charArr, charArrSize);

    delete[] intArr;
    delete[] charArr;

    return 0;
}