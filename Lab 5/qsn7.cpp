#include <iostream>

using namespace std;

class Compare {
public:
    int comp(int a, int b) {
        if (a >= b) {
            return a;
        } else {
            return b;
        }
    }

    double comp(double a, double b) {
        if (a >= b) {
            return a;
        } else {
            return b;
        }
    }

    void comp(const int arr1[], const int arr2[], int size) {
        bool identical = true;
        for (int i = 0; i < size; i++) {
            if (arr1[i] != arr2[i]) {
                identical = false;
                break;
            }
        }

        if (identical) {
            cout << "The two integer arrays are identical." << endl;
        } else {
            cout << "The two integer arrays are not identical." << endl;
        }
    }
};

int main() {
    Compare c;

    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Larger integer: " << c.comp(int1, int2) << endl;

    double float1, float2;
    cout << "\nEnter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Larger floating-point value: " << c.comp(float1, float2) << endl;

    int size;
    cout << "\nEnter size of the two integer arrays: ";
    cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    c.comp(arr1, arr2, size);

    delete[] arr1;
    delete[] arr2;

    return 0;
}