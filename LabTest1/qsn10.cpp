#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *ids = new int[n];
    cout << "Enter " << n << " student IDs:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ids + i);
    }

    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    int *ptr = ids;
    int foundPosition = -1;

    for (int i = 0; i < n; i++) {
        if (*ptr == searchId) {
            foundPosition = i;
            break;
        }
        ptr++;
    }

    if (foundPosition != -1) {
        cout << "ID " << searchId << " found at position: " << foundPosition << endl;
    } else {
        cout << "ID " << searchId << " not found." << endl;
    }

    delete[] ids;
    return 0;
}