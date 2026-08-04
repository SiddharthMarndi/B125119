#include <iostream>
using namespace std;

class Student {
    public:
        int roll;
        char name[50];
        float marks;
        void accept();
        void display();
};

void Student::accept() {
    cout << "Enter roll no.:";
    cin >> roll;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter marks:";
    cin >> marks;
}

void Student::display() {
    cout << "THE STUDENT'S DATA ARE:\n";
    cout << "Roll number:" << roll << "\n";
    cout << "Name:" << name << "\n";
    cout << "Marks:" << marks << "\n";
}

int main() {
    Student s1;
    s1.accept();
    s1.display();
}