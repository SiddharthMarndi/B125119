#include <stdio.h>
struct product{
    int ID;
    char name[50];
    int quantity;
    float price;
};
int main(){
    struct product p;
    printf("Enter product ID:");
    scanf("%d",&p.ID);

    printf("Enter product name:");
    scanf("%s",&p.name);

    printf("Enter quantity:");
    scanf("%d",&p.quantity);

    printf("Enter price:");
    scanf("%f",&p.price);

    printf("The product details are\n");
    printf("Product ID. is: %d\n",p.ID);
    printf("Name is: %s\n",p.name);
    printf("Quantity: %d\n",p.quantity);
    printf("Price is: %f\n",p.price);

    return 0;


}
