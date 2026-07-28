#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};


struct student {
    int roll;
    char name[50];
    struct date dob;
};

int main() {
    struct student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Birth Day: ");
    scanf("%d", &s.dob.day);

    printf("Enter Birth Month: ");
    scanf("%d", &s.dob.month);

    printf("Enter Birth Year: ");
    scanf("%d", &s.dob.year);

    printf("Student Details\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("DOB         : %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
