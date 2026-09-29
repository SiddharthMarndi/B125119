#include <iostream>
#include <string>
using namespace std;

class Item {
    string name;
    float price;
    int quantity;
public:
    Item() {
        price = 0;
        quantity = 0;
    }
    void input() {
        cout << "Enter item name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }
    Item operator+(const Item& i) {
        Item temp;
        if (name == i.name && price == i.price) {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + i.quantity;
        } else {
            cout << "Items are different or prices do not match.\n";
            temp.name = "Invalid";
            temp.price = 0;
            temp.quantity = 0;
        }
        return temp;
    }
    void display() {
        cout << "Name: " << name << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item i1, i2, i3;
    cout << "Enter Item 1:\n";
    i1.input();
    cout << "Enter Item 2:\n";
    i2.input();
    i3 = i1 + i2;
    cout << "Resultant Item:\n";
    i3.display();
    return 0;
}