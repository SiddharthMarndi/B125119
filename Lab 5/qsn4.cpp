#include <iostream>

using namespace std;

class Searcher {
public:
    int search(const int arr[], int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

    int search(const char arr[], int size, char target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

    int search(const int arr[], int size, int target, int startIndex, int endIndex) {
        if (startIndex < 0 || endIndex >= size || startIndex > endIndex) {
            return -1;
        }
        for (int i = startIndex; i <= endIndex; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Searcher s;
    int intSize;
    cout << "Enter size of integer array: ";
    cin >> intSize;
    int* intArr = new int[intSize];
    cout << "Enter integer array elements: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArr[i];
    }
    int intTarget;
    cout << "Enter integer element to search: ";
    cin >> intTarget;
    int intPos = s.search(intArr, intSize, intTarget);
    if (intPos != -1) {
        cout << "Integer element found at index: " << intPos << endl;
    } else {
        cout << "Integer element not found" << endl;
    }
    int charSize;
    cout << "Enter size of character array: ";
    cin >> charSize;
    char* charArr = new char[charSize];
    cout << "Enter character array elements: ";
    for (int i = 0; i < charSize; i++) {
        cin >> charArr[i];
    }
    char charTarget;
    cout << "Enter character element to search: ";
    cin >> charTarget;
    int charPos = s.search(charArr, charSize, charTarget);
    if (charPos != -1) {
        cout << "Character element found at index: " << charPos << endl;
    } else {
        cout << "Character element not found" << endl;
    }
    int rangeTarget, startIdx, endIdx;
    cout << "Enter integer element to search within range: ";
    cin >> rangeTarget;
    cout << "Enter start index and end index: ";
    cin >> startIdx >> endIdx;
    int rangePos = s.search(intArr, intSize, rangeTarget, startIdx, endIdx);
    if (rangePos != -1) {
        cout << "Integer element found within range at index: " << rangePos << endl;
    } else {
        cout << "Integer element not found within the specified range" << endl;
    }

    delete[] intArr;
    delete[] charArr;
    return 0;
}