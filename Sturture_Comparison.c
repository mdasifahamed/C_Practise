#include<stdio.h>
struct Product{

    int price;
    int stock;
};

int main(){


    struct Product product1 = {350,1565};
    struct Product product2, product3;

    product2.price = 475;
    product2.stock = 1605;

    product3.price = 575;
    product3.stock = 1120;


    if(product1.price>product2.price && product1.price>product3.price){

        printf("Product 1 Is The Most Expensive Product!");
    }else if(product2.price>product1.price && product2.price>product3.price){

        printf("Product 2 Is The Most Expensive Product!");

    } else {

        printf("Product 3 Is The Most Expensive Product!");
    }

    printf("\n\n");

    if(product1.stock>product2.stock && product1.stock>product3.stock){

        printf("Most Available Product Is Product 1");
    }else if(product2.stock>product1.stock && product2.stock>product3.stock){

        printf("Most Available Product Is Product 2");

    } else {

        printf("Most Available Product Is Product 3");
    }

return 0;


}
