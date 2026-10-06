#include <iostream>
#include <string>

using namespace std;

class Patient {
protected:
    string name;
    int patientID;
    int age;
public:
    Patient(string n, int id, int a) {
        name = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomChargesPerDay;
    int numberOfDays;
public:
    InPatient(string n, int id, int a, double charges, int days) : Patient(n, id, a) {
        roomChargesPerDay = charges;
        numberOfDays = days;
    }
    void displayBill() {
        double totalBill = roomChargesPerDay * numberOfDays;
        cout << "Patient Name: " << name << endl;
        cout << "Patient ID: " << patientID << endl;
        cout << "Age: " << age << endl;
        cout << "Total Hospital Bill: " << totalBill << endl;
    }
};

int main() {
    InPatient ip("Siddharth", 301, 45, 1500.0, 4);
    ip.displayBill();
    return 0;
}