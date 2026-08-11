#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empID;
    string name;
    float basicSalary;
    int numMonths;
    float* monthlyEarnings;

public:
    Employee() {
        monthlyEarnings = nullptr;
    }

    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Number of Months: ";
        cin >> numMonths;

        monthlyEarnings = new float[numMonths];

        for (int i = 0; i < numMonths; i++) {
            cout << "Enter earning for month " << (i + 1) << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    void displayAnalysis() {
        float total = 0;
        int maxMonthIndex = 0;

        for (int i = 0; i < numMonths; i++) {
            total += monthlyEarnings[i];
            if (monthlyEarnings[i] > monthlyEarnings[maxMonthIndex]) {
                maxMonthIndex = i;
            }
        }

        float average = total / numMonths;

        cout << "\n--- Employee Salary Analysis ---" << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Number of Months: " << numMonths << endl;
        cout << "Monthly Earnings: ";
        for (int i = 0; i < numMonths; i++) {
            cout << monthlyEarnings[i] << " ";
        }
        cout << endl;
        cout << "Total Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;
        cout << "Highest Earning Month: Month " << (maxMonthIndex + 1) << " (" << monthlyEarnings[maxMonthIndex] << ")" << endl;
    }

    ~Employee() {
        delete[] monthlyEarnings;
    }
};

int main() {
    Employee emp;
    emp.acceptDetails();
    emp.displayAnalysis();

    return 0;
}