#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empID;
    string name;
    float salary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "ID: " << empID << " | Name: " << name << " | Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* empArray = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << (i + 1) << ":" << endl;
        empArray[i].acceptDetails();
    }

    cout << "Employee Details:" << endl;
    for (int i = 0; i < n; i++) {
        empArray[i].displayDetails();
    }

    delete[] empArray;

    return 0;
}