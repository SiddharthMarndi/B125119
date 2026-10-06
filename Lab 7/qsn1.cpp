#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;
public:
    Employee(string n, double b) {
        name = n;
        basicSalary = b;
    }
};

class Developer : public Employee {
protected:
    double experience;
public:
    Developer(string n, double b, double exp) : Employee(n, b) {
        experience = exp;
    }
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;
public:
    SeniorDeveloper(string n, double b, double exp, double pb) : Developer(n, b, exp) {
        projectBonus = pb;
    }
    void display() {
        double expBonus = 0.05 * basicSalary * experience;
        double finalSalary = basicSalary + expBonus + projectBonus;
        cout << "Name: " << name << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main() {
    SeniorDeveloper sd("Siddharth", 50000.0, 3.0, 10000.0);
    sd.display();
    return 0;
}