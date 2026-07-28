#include <stdio.h>
struct distance{
    int feet;
    int inches;
};
int main(){
    float s;
    struct distance d;
    printf("Enter feet:");
    scanf("%d",&d.feet);
    printf("Enter inches:");
    scanf("%d",&d.inches);

    printf("The total distance is %dft %dinch",d.feet,d.inches);

    return 0;


}
