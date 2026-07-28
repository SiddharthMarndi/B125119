#include <stdio.h>
struct book{
    int book_id;
    char title[50];
    char name[50];
    float price;
};
int main(){
    struct book b;
    printf("Enter Book_id:");
    scanf("%d",&b.book_id);

    printf("Enter book title:");
    scanf("%s",&b.title);

    printf("Enter author.s name:");
    scanf("%s",&b.name);

    printf("Enter book price:");
    scanf("%f",&b.price);

    printf("The book details are\n");
    printf("Bok id. is: %d\n",b.book_id);
    printf("title is: %s\n",b.title);
    printf("Author is: %s\n",b.name);
    printf("Price is: %f\n",b.price);

    return 0;


}
