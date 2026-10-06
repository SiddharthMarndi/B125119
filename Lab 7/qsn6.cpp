#include <iostream>

using namespace std;

class InternalExam {
public:
    void display() {
        cout << "Internal Exam Display Function" << endl;
    }
};

class ExternalExam {
public:
    void display() {
        cout << "External Exam Display Function" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void show() {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult fr;
    fr.show();
    return 0;
}