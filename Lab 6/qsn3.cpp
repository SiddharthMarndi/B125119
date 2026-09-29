#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float totalMarks;
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter total marks: ";
        cin >> totalMarks;
    }
    bool operator>(const Student& s) {
        return totalMarks > s.totalMarks;
    }
    string getName() {
        return name;
    }
};

int main() {
    Student s1, s2;
    cout << "Enter Student 1 Details:\n";
    s1.input();
    cout << "Enter Student 2 Details:\n";
    s2.input();
    if (s1 > s2) {
        cout << s1.getName() << " has higher marks." << endl;
    } else {
        cout << s2.getName() << " has higher marks or both are equal." << endl;
    }
    return 0;
}