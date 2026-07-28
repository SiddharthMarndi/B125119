#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float cgpa;
};

int main() {
    struct student s[5];

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    printf("\nStudents with CGPA >= 8.0:\n");
    for (int i = 0; i < 5; i++) {
        if (s[i].cgpa >= 8.0) {
            printf("Roll: %d, Name: %s, CGPA: %.2f\n", s[i].roll, s[i].name, s[i].cgpa);
        }
    }

    return 0;
}
