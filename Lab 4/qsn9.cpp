#include <iostream>
#include <string>

using namespace std;

class Exam {
private:
    string studentName;
    string subject;
    double marks;
    double maxMarks;

public:
    Exam(string name, string sub, double m, double maxM) {
        studentName = name;
        subject = sub;
        marks = m;
        maxMarks = maxM;
    }

    friend class Result;
};

class Result {
public:
    void generateResult(const Exam& e) {
        double percentage = (e.marks / e.maxMarks) * 100.0;

        cout << "Online Exam Result" << endl;
        cout << "Student Name  : " << e.studentName << endl;
        cout << "Subject       : " << e.subject << endl;
        cout << "Marks Obtained: " << e.marks << " / " << e.maxMarks << endl;
        cout << "Percentage    : " << percentage << "%" << endl;

        if (percentage >= 40.0) {
            cout << "Final Status  : Pass" << endl;
        } else {
            cout << "Final Status  : Fail" << endl;
        }
    }
};
int main() {
    string name;
    string subject;
    double marks;
    double maxMarks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Subject: ";
    getline(cin, subject);
    cout << "Enter Marks Obtained: ";
    cin >> marks;
    cout << "Enter Maximum Marks: ";
    cin >> maxMarks;
    Exam examRecord(name, subject, marks, maxMarks);
    Result res;
    res.generateResult(examRecord);

    return 0;
}

