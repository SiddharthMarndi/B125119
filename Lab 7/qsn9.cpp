#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person {
protected:
    int empID;
public:
    Employee(string n, int id) : Person(n) {
        empID = id;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id) {
        department = dept;
        cout << "Manager constructor" << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Siddharth", 1001, "Engineering");
    m.display();
    return 0;
}