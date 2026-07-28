#include <stdio.h>
struct student{
    int roll_no;
    char name[50];
    int age;
    float cgpa;
};
int main(){
    struct student s;
    printf("Enter roll number:");
    scanf("%d",&s.roll_no);

    printf("Enter your name:");
    scanf("%s",&s.name);

    printf("Enter your age:");
    scanf("%d",&s.age);

    printf("Enter your cgpa:");
    scanf("%f",&s.cgpa);

    printf("The student details are\n");
    printf("Roll no. is: %d\n",s.roll_no);
    printf("Name is: %s\n",s.name);
    printf("Age is: %d\n",s.age);
    printf("cgpa is: %f\n",s.cgpa);

    return 0;


}
