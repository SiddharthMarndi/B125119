#include <iostream>
#include <string>

using namespace std;

class Academic {
protected:
    float sub1, sub2, sub3;
public:
    Academic(float s1, float s2, float s3) {
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }
};

class Sports {
protected:
    float sportsMarks;
public:
    Sports(float sm) {
        sportsMarks = sm;
    }
};

class StudentResult : public Academic, public Sports {
private:
    string name;
public:
    StudentResult(string n, float s1, float s2, float s3, float sm) : Academic(s1, s2, s3), Sports(sm) {
        name = n;
    }
    void display() {
        float total = sub1 + sub2 + sub3 + sportsMarks;
        float average = total / 4.0;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    StudentResult sr("Siddharth", 85.0, 90.0, 80.0, 95.0);
    sr.display();
    return 0;
}