#include <iostream>

using namespace std;

class DataProcessor {
public:
    int process(int a, int b) {
        return a + b;
    }

    double process(int a, double b) {
        return a + b;
    }

    double process(double a, double b) {
        return a + b;
    }

    int process(const int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    int process(const int* ptr1, const int* ptr2) {
        return *ptr1 + *ptr2;
    }
};

int main() {
    DataProcessor dp;

    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Sum of two integers: " << dp.process(int1, int2) << endl;

    int intVal;
    double floatVal;
    cout << "\nEnter an integer and a floating-point number: ";
    cin >> intVal >> floatVal;
    cout << "Sum of integer and float: " << dp.process(intVal, floatVal) << endl;

    double float1, float2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Sum of two floating-point numbers: " << dp.process(float1, float2) << endl;

    int size;
    cout << "\nEnter size of integer array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter integer array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Sum of array elements: " << dp.process(arr, size) << endl;

    int ptrVal1, ptrVal2;
    cout << "\nEnter two integer values for pointer processing: ";
    cin >> ptrVal1 >> ptrVal2;
    cout << "Sum of values via pointers: " << dp.process(&ptrVal1, &ptrVal2) << endl;

    delete[] arr;

    return 0;
}