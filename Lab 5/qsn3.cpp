#include <iostream>

using namespace std;

class Calculator {
public:
    int Total(const int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++) {
            total += arr[i];
        }
        return total;
    }

    double Total(const double arr[], int size) {
        double total = 0.0;
        for (int i = 0; i < size; i++) {
            total += arr[i];
        }
        return total;
    }

    int Total(const int arr[], int size, int elements) {
    int total = 0;
    int limit;

    if (elements < size) {
        limit = elements;
    } else {
        limit = size;
    }

    for (int i = 0; i < limit; i++) {
        total += arr[i];
    }
    return total;
}
};

int main() {
    Calculator calc;

    int intSize;
    cout << "Enter size of integer array: ";
    cin >> intSize;
    int* intArr = new int[intSize];
    cout << "Enter integer array elements: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArr[i];
    }

    int floatSize;
    cout << "Enter size of floating-point array: ";
    cin >> floatSize;
    double* floatArr = new double[floatSize];
    cout << "Enter floating-point array elements: ";
    for (int i = 0; i < floatSize; i++) {
        cin >> floatArr[i];
    }

    int count;
    cout << "Enter number of elements to consider for portion of integer array: ";
    cin >> count;

    cout << "Total of integer array: " << calc.Total(intArr, intSize) << endl;
    cout << "Total of floating-point array: " << calc.Total(floatArr, floatSize) << endl;
    cout << "Total of portion of integer array: " << calc.Total(intArr, intSize, count) << endl;

    delete[] intArr;
    delete[] floatArr;

    return 0;
}