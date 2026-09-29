#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;
public:
    Product() {
        price = 0;
        quantity = 0;
    }
    void input() {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> quantity;
    }
    Product operator+(const Product& p) {
        Product temp;
        if (name == p.name && price == p.price) {
            temp.name = name;
            temp.price = price;
            temp.quantity = quantity + p.quantity;
        } else {
            cout << "Products are different or prices differ. Returning first product.\n";
            temp = *this;
        }
        return temp;
    }
    bool operator>(const Product& p) {
        return (price * quantity) > (p.price * p.quantity);
    }
    void display() {
        cout << "Name: " << name << ", Price: " << price << ", Quantity: " << quantity << ", Total Value: " << (price * quantity) << endl;
    }
};

int main() {
    Product p1, p2;
    cout << "Enter Product 1:\n";
    p1.input();
    cout << "Enter Product 2:\n";
    p2.input();
    Product p3 = p1 + p2;
    cout << "Combined Product Details:\n";
    p3.display();
    if (p1 > p2) {
        cout << "Product 1 has a higher total value than Product 2." << endl;
    } else {
        cout << "Product 2 has a higher or equal total value compared to Product 1." << endl;
    }
    return 0;
}