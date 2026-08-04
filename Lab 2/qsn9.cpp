#include <iostream>
using namespace std;

class StudentResult {
    public:
        char name[50];
        int roll;
        float marks[5];
        float totalMarks;
        float percentage;
        char grade;
        void accept();
        void calculate();
        void display();
};

void StudentResult::accept() {
    cout << "Enter Student Name:";
    cin >> name;
    cout << "Enter Roll Number:";
    cin >> roll;
    cout << "Enter Marks in 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ":";
        cin >> marks[i];
    }
}

void StudentResult::calculate() {
    totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    percentage = (totalMarks / 500.0) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
}

void StudentResult::display() {
    cout << "THE STUDENT RESULT DETAILS ARE:\n";
    cout << "Student Name:" << name << "\n";
    cout << "Roll Number:" << roll << "\n";
    cout << "Total Marks:" << totalMarks << "/500\n";
    cout << "Percentage:" << percentage << "%\n";
    cout << "Grade:" << grade << "\n";
}

int main() {
    StudentResult s1;
    s1.accept();
    s1.calculate();
    s1.display();
}