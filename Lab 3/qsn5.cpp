#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNumber;
    string name;
    float marks;

public:
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student* s = new Student();

    s->acceptDetails();
    s->displayDetails();

    delete s;

    return 0;
}