#include <iostream>
using namespace std;

class Product {
    public:
        int productId;
        char productName[50];
        int quantity;
        double price;
        void accept();
        void display();
        void sellProduct();
        void displayInventoryValue();
};

void Product::accept() {
    cout << "Enter Product ID:";
    cin >> productId;
    cout << "Enter Product Name:";
    cin >> productName;
    cout << "Enter Quantity Available:";
    cin >> quantity;
    cout << "Enter Price per Unit:";
    cin >> price;
}

void Product::sellProduct() {
    int soldQty;
    cout << "Enter quantity to sell:";
    cin >> soldQty;
    if (soldQty > quantity) {
        cout << "Error! Quantity to sell exceeds available stock.\n";
    } else if (soldQty <= 0) {
        cout << "Invalid quantity.\n";
    } else {
        quantity -= soldQty;
        cout << "Product sold successfully.\n";
    }
}

void Product::displayInventoryValue() {
    double inventoryValue = quantity * price;
    cout << "Total Inventory Value:" << inventoryValue << "\n";
}

void Product::display() {
    cout << "THE PRODUCT DETAILS ARE:\n";
    cout << "Product ID:" << productId << "\n";
    cout << "Product Name:" << productName << "\n";
    cout << "Quantity Available:" << quantity << "\n";
    cout << "Price per Unit:" << price << "\n";
    displayInventoryValue();
}

int main() {
    Product p1;
    p1.accept();
    p1.display();
    p1.sellProduct();
    p1.display();
}