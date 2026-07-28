#include <stdio.h>
struct employee{
    int emp_id;
    char name[50];
    float salary;
};
int main(){
    struct employee e;
    printf("Enter employee id:");
    scanf("%d",&e.emp_id);

    printf("Enter your name:");
    scanf("%s",&e.name);

    printf("Enter your salary:");
    scanf("%f",&e.salary);

    printf("The employee details are\n");
    printf("Employee id. is: %d\n",e.emp_id);
    printf("Name is: %s\n",e.name);
    printf("salary is: %f\n",e.salary);

    return 0;


}
