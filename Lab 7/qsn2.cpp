#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;     
    int rollNo;     
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }
    
    void calculateResult() {
        cout << "Base student result calculation." << endl;
    }
};

class RegularStudent : public Student {
private:
    float marks1, marks2, marks3; 
public:
    RegularStudent(string n, int r, float m1, float m2, float m3) : Student(n, r) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    
    void calculateResult() {
        float total = marks1 + marks2 + marks3;
        cout << "Regular Student - Name: " << name << ", Roll No: " << rollNo << ", Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student {
private:
    float marks1, marks2, marks3; 
public:
    ScholarshipStudent(string n, int r, float m1, float m2, float m3) : Student(n, r) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    
    void calculateResult() {
        float total = marks1 + marks2 + marks3 + 5.0; // Adding 5 bonus marks as specified[cite: 1, 2]
        cout << "Scholarship Student - Name: " << name << ", Roll No: " << rollNo << ", Total Marks with Bonus: " << total << endl;
    }
};

int main() {
    RegularStudent rs("Siddharth", 101, 80.0, 85.0, 90.0);
    ScholarshipStudent ss("Rahul", 102, 75.0, 80.0, 85.0);
    
    rs.calculateResult();
    ss.calculateResult();
    
    return 0;
}