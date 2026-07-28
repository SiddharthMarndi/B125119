#include <stdio.h>
struct rectangle{
    float length;
    float breadth;
};
int main(){
    float a;
    struct rectangle r;
    printf("Enter length:");
    scanf("%f",&r.length);
    printf("Enter breadth:");
    scanf("%f",&r.breadth);

    a=r.length*r.breadth;
    printf("The area is %f",a);

    return 0;


}
