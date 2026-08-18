#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string foodItem;
    int quantity;
    double price;

public:
    FoodOrder(int id, string item, int qty, double pr) {
        orderId = id;
        foodItem = item;
        quantity = qty;
        price = pr;
    }

    friend void calculateBill(const FoodOrder& order);
};

void calculateBill(const FoodOrder& order) {
    double totalBill = order.quantity * order.price;

    cout << "Food Order Details" << endl;
    cout << "Order ID    : " << order.orderId << endl;
    cout << "Food Item   : " << order.foodItem << endl;
    cout << "Quantity    : " << order.quantity << endl;
    cout << "Price/Unit  : " << order.price << endl;
    cout << "" << endl;
    cout << "Total Bill  : " << totalBill << endl;
}

int main() {
    int id;
    string item;
    int qty;
    double price;

    cout << "Enter Order ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Food Item: ";
    getline(cin, item);

    cout << "Enter Quantity: ";
    cin >> qty;

    cout << "Enter Price per Unit: ";
    cin >> price;

    FoodOrder myOrder(id, item, qty, price);
    calculateBill(myOrder);

    return 0;
}