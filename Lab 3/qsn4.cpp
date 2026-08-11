#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    float* arr = new float[n];
    float sum = 0.0f;

    cout << "Enter " << n << " float numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    delete[] arr;

    return 0;
}