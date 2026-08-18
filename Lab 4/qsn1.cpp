#include <iostream>
#include <string>
using namespace std;

class Diary {
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    Diary(string name, int entries, string entry) {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    friend void displayDiary(const Diary& d);
};

void displayDiary(const Diary& d) {
    cout << "\nPersonal Diary Details" << endl;
    cout << "Owner Name        : " << d.ownerName << endl;
    cout << "Number of Entries : " << d.numberOfEntries << endl;
    cout << "Last Entry        : \"" << d.lastEntry << "\"" << endl;
}

int main() {
    string name;
    int entries;
    string entry;

    cout << "Enter Owner Name: ";
    getline(cin, name);

    cout << "Enter Number of Entries: ";
    cin >> entries;
    cin.ignore();

    cout << "Enter Last Entry: ";
    getline(cin, entry);

    Diary myDiary(name, entries, entry);
    displayDiary(myDiary);

    return 0;
}