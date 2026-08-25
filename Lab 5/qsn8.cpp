#include <iostream>
#include <cmath>

using namespace std;

class Counter {
public:
    int count(int num) {
    if (num == 0) {
        return 1;
    }
    if (num < 0) {
        num = -num;
    }
    int digits = 0;
    while (num > 0) {
        digits++;
        num /= 10;
    }
    return digits;
}

    int count(const int arr[], int size) {
        int elementCount = 0;
        for (int i = 0; i < size; i++) {
            elementCount++;
        }
        return elementCount;
    }

    int count(const char arr[], int size, char target) {
        int occurrences = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                occurrences++;
            }
        }
        return occurrences;
    }
};

int main() {
    Counter c;

    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Number of digits: " << c.count(number) << endl;

    int intSize;
    cout << "\nEnter size of integer array: ";
    cin >> intSize;
    int* intArr = new int[intSize];
    cout << "Enter integer array elements: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArr[i];
    }
    cout << "Number of elements in array: " << c.count(intArr, intSize) << endl;

    int charSize;
    cout << "\nEnter size of character array: ";
    cin >> charSize;
    char* charArr = new char[charSize];
    cout << "Enter character array elements: ";
    for (int i = 0; i < charSize; i++) {
        cin >> charArr[i];
    }

    char targetChar;
    cout << "Enter character to count occurrences: ";
    cin >> targetChar;
    cout << "Occurrences of '" << targetChar << "': " << c.count(charArr, charSize, targetChar) << endl;

    delete[] intArr;
    delete[] charArr;

    return 0;
}