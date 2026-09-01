
#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;
    double *ptr = &balance;
    double add, deduct;

    cout << "Current Balance: " << *ptr << endl;

    cout << "Enter amount to add: ";
    cin >> add;
    *ptr += add;
    cout<<"New balance is:"<<*ptr<<endl;

    cout << "Enter amount to deduct: ";
    cin >> deduct;
    if(deduct>*ptr){
        cout<<"Insufficient balance"<<endl;
    }
    else{
        *ptr -= deduct;
    }

    cout << "Final Balance: " << *ptr << endl;

    return 0;
}
