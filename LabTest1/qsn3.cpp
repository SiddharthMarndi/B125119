#include <iostream>
using namespace std;

int main() {
    int books[6] = {101, 102, 103, 104, 105, 106};
    int *ptr = books;

    for (int i = 0; i < 6; i++) {
        cout << "Book ID: " << *ptr << "Address: " << ptr << endl;
        ptr++;
    }

    return 0;
}