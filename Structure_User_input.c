#include<stdio.h>
#include<string.h>

struct Product{

    int price;
    int stock;
};

struct Product product1, product2; // globally initiate initiate can be accessed in any function in this code.

int main(){

    // Product 1
    printf("Enter Product Info The Product 1 \n ");
    printf("Enter Price : ");
    scanf("%d", &product1.price);
    printf("Enter available Stock : ");
    scanf("%d", &product1.stock);

    // Product 2
    printf("\n\n Enter Product Info The Product 2 \n ");
    printf("Enter Price : ");
    scanf("%d", &product2.price);
    printf("Enter available Stock : ");
    scanf("%d", &product2.stock);

    printf("Product 1 Info :\n\n");

    printf("Price : %d\n", product1.price);
    printf("Stock Availity : %d pcs\n", product1.stock);

    printf("\nProduct 2 Info :\n\n");

    printf("Price : %d\n", product2.price);
    printf("Stock Availity : %d pcs\n", product2.stock);


}
