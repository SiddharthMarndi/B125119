#include <iostream>
using namespace std;

class Employee {
    public:
        int empId;
        char empName[50];
        double basicSalary;
        double hra;
        double da;
        double grossSalary;
        void accept();
        void calculateSalary();
        void display();
};

void Employee::accept() {
    cout << "Enter Employee ID:";
    cin >> empId;
    cout << "Enter Employee Name:";
    cin >> empName;
    cout << "Enter Basic Salary:";
    cin >> basicSalary;
}

void Employee::calculateSalary() {
    hra = 0.20 * basicSalary;
    da = 0.10 * basicSalary;
    grossSalary = basicSalary + hra + da;
}

void Employee::display() {
    cout << "THE EMPLOYEE SALARY DETAILS ARE:\n";
    cout << "Employee ID:" << empId << "\n";
    cout << "Employee Name:" << empName << "\n";
    cout << "Basic Salary:" << basicSalary << "\n";
    cout << "HRA:" << hra << "\n";
    cout << "DA:" << da << "\n";
    cout << "Gross Salary:" << grossSalary << "\n";
}

int main() {
    Employee e1;
    e1.accept();
    e1.calculateSalary();
    e1.display();
}