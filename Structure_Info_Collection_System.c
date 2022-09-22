#include<stdio.h>
#include<stdlib.h>
#define MAXNAME 50
struct Product{
    int id;
    char name[MAXNAME];
    int price;
    int stock;
};

int main(){

    int size, i;
    printf("Enter Total Number of Product : ");
    scanf("%d",&size);
    struct Product tech_product[size];

    for(i = 0; i<size; i++){

        printf("\nEnter Product Info For Product No . : %d\n", i+1);

        printf("Enter Product Id : ");
        scanf("%d", &tech_product[i].id);
        fflush(stdin);// To solve issue for string input line skipping in console.
        printf("Enter Product Name: ");
        gets(tech_product[i].name);
        printf("Enter Product Price : ");
        scanf("%d", &tech_product[i].price);
        printf("Enter Product Stock : ");
        scanf("%d", &tech_product[i].stock);

        printf("\n");
    }

    for(i = 0; i<size; i++){


        printf("Product Name For Product id No %d is %s\n", tech_product[i].id, tech_product[i].name);
        printf("Product Price For Product id No %d  is %d\n", tech_product[i].id,  tech_product[i].price);
        printf("Product Stock Avalibale For Product id No %d  is %d\n", tech_product[i].id,  tech_product[i].stock);

        printf("\n");

    }
    return 0;

}
