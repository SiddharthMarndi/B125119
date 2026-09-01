#include <iostream>
using namespace std;

int main() {
    int seats[8] = {101, 102, 103, 104, 105, 106,107,108};
    int *ptr = seats;
    int newseat;
     for (int i = 1; i <= 8; i++) {
        cout<<"For seat"<<i<<endl;
        cout<<"ENter new seat for seat1:";
        cin>>newseat;
        cout<<"Seat"<<i<<"before updating:"<<*ptr<<endl;
        *ptr=newseat;
        cout<<"Seat"<<i<<"after updating:"<<*ptr<<endl;
     }
     return 0;
}

