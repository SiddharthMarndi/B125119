#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNumber;
    string name;
    int numberOfSubjects;
    float* marks;

public:
    Student() {
        marks = nullptr;
    }

    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;

        marks = new float[numberOfSubjects];

        cout << "Enter marks for " << numberOfSubjects << " subjects:" << endl;
        for (int i = 0; i < numberOfSubjects; i++) {
            cin >> marks[i];
        }
    }

    void displayResult() {
        float total = 0;
        for (int i = 0; i < numberOfSubjects; i++) {
            total += marks[i];
        }
        float average = total / numberOfSubjects;

        cout << "\nStudent Result:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < numberOfSubjects; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student s;
    s.acceptDetails();
    s.displayResult();

    return 0;
}