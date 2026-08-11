#include <iostream>
#include <string>
using namespace std;

class Product {
    int productID;
    string name;
    float price;
    int quantity;

public:
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void displayDetails() {
        cout << "ID: " << productID << " | Name: " << name << " | Price: " << price << " | Quantity: " << quantity << " | Item Total: " << (price * quantity) << endl;
    }

    float getItemTotal() {
        return price * quantity;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product* cart = new Product[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for product " << (i + 1) << ":" << endl;
        cart[i].acceptDetails();
    }

    cout << "--- Shopping Cart ---" << endl;
    float grandTotal = 0;
    for (int i = 0; i < n; i++) {
        cart[i].displayDetails();
        grandTotal += cart[i].getItemTotal();
    }

    cout << "Total Amount: " << grandTotal << endl;

    delete[] cart;

    return 0;
}