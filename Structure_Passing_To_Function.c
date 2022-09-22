#include<stdio.h>
#include<stdlib.h>
#define MAXNAME 50
struct Product{
    int id;
    char name[MAXNAME];
    int price,stock;
};

void display(struct Product products[], int size){

    int i ;
    for(i =0 ; i<size; i++){

        printf("Name of The Product for Product id %d is %s\n", products[i].id, products[i].name);
        printf("Price of The Product for Product id %d is %d \n", products[i].id, products[i].price);
        printf("Available Stock of The Product for Product id %d is %d \n", products[i].id, products[i].stock);
        printf("\n");

    }
}


int main(){

    int size,i;
    printf("Enter Total Numbers of Products : ");
    scanf("%d", &size);
    struct Product daily_product[size];
    for(i = 0; i<size; i++){

        printf("Enter Info for Product No : %d\n", i+1);
        printf("Enter Product Id : ");
        scanf("%d", &daily_product[i].id);
        fflush(stdin);// to avoid scanf line Skipping issue string after integer data type.
        printf("Enter Product Name: ");
        scanf("%[^\n]s", &daily_product[i].name);

        printf("Enter Product Price: ");
        scanf("%d", &daily_product[i].price);

        printf("Enter Product Stock: ");
        scanf("%d", &daily_product[i].stock);

        printf("\n");
    }
    display(daily_product,size);
    return 0;

}
