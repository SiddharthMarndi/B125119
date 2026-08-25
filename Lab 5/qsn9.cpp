#include <iostream>

using namespace std;

class MaximumValueFinder {
public:
    int findMax(int a, int b) {
        if (a > b) {
            return a;
        }
        return b;
    }

    int findMax(const int* ptr1, const int* ptr2) {
        if (*ptr1 > *ptr2) {
            return *ptr1;
        }
        return *ptr2;
    }

    int findMax(const int* arr, int size) {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }
};

int main() {
    MaximumValueFinder finder;

    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Maximum between two integers: " << finder.findMax(int1, int2) << endl;

    int ptrVal1, ptrVal2;
    cout << "\nEnter two integers for pointer comparison: ";
    cin >> ptrVal1 >> ptrVal2;
    cout << "Maximum using pointers: " << finder.findMax(&ptrVal1, &ptrVal2) << endl;

    int size;
    cout << "\nEnter size of integer array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum element in array: " << finder.findMax(arr, size) << endl;

    delete[] arr;

    return 0;
}