#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int employeeID;
    string name;
public:
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

class Developer : virtual public Employee {
protected:
    string programmingLanguage;
public:
    Developer(int id, string n, string lang) : Employee(id, n) {
        programmingLanguage = lang;
    }
};

class Tester : virtual public Employee {
protected:
    string testingTool;
public:
    Tester(int id, string n, string tool) : Employee(id, n) {
        testingTool = tool;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string lang, string tool) 
        : Employee(id, n), Developer(id, n, lang), Tester(id, n, tool) {}
    
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: " << programmingLanguage << endl;
        cout << "Testing Tool: " << testingTool << endl;
    }
};

int main() {
    TechLead tl(701, "Siddharth", "C++", "Selenium");
    tl.display();
    return 0;
}