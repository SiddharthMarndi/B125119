#include <iostream>
using namespace std;

class LibraryBook {
    public:
        int bookId;
        char bookTitle[50];
        char studentName[50];
        int daysIssued;
        void accept();
        int calculateFine();
        void display();
};

void LibraryBook::accept() {
    cout << "Enter Book ID:";
    cin >> bookId;
    cout << "Enter Book Title:";
    cin >> bookTitle;
    cout << "Enter Student Name:";
    cin >> studentName;
    cout << "Enter Number of Days Issued:";
    cin >> daysIssued;
}

int LibraryBook::calculateFine() {
    if (daysIssued > 15) {
        return (daysIssued - 15) * 2;
    }
    return 0;
}

void LibraryBook::display() {
    cout << "THE TRANSACTION DETAILS ARE:\n";
    cout << "Book ID:" << bookId << "\n";
    cout << "Book Title:" << bookTitle << "\n";
    cout << "Student Name:" << studentName << "\n";
    cout << "Days Issued:" << daysIssued << "\n";
    cout << "Fine Amount:" << calculateFine() << "\n";
}

int main() {
    LibraryBook b1;
    b1.accept();
    b1.display();
}