#include <stdio.h>
struct Student{
    int roll_no;
    char name[50];
    float mC;
    float mMaths;
    float mPhy
};
int main(){
    float a;
    struct Student s;
    printf("Enter roll no.:");
    scanf("%d",&s.roll_no);
    printf("Enter name:");
    scanf("%s",&s.name);
    printf("enter marcks in C:");
    scanf("%f",&s.mC);
    printf("enter marcks in Maths:");
    scanf("%f",&s.mMaths);
    printf("enter marcks in Physics:");
    scanf("%f",&s.mPhy);
    a=(s.mC+s.mMaths+s.mPhy)/3;

    printf("the percentage scored is: %f",a);
    return 0;



}
