#include<stdio.h>
#include<string.h>

struct Product{

    int price;
    int stock;
};

struct Product  product3, product4; // globally initiate initiate can be accessed in any function in this code.

int main(){

    //struct Product product3, product4;

    // Product 1 and 2
    // local declaration.
    struct Product product1  = {250,1225}; //  Direct Initialization to structure using "{value1,value2,,,,value_of_n}"  Must maintian element Sequence.
    struct Product product2 = {170,3547}; // Direct Initialization to structure using "{value1,value2,,,,value_of_n}" Must maintian element Sequence.


    // product 3

    product3.price = 350; // element wise initiate to structure.
    product3.stock = 875; // element wise initiate to structure.

    // product 4

    // Copying value another structure variable .
    product4 = product3;


    // Product 1,2,3,4, info


    printf("Product 1 Info :\n\n");

    printf("Price : %d\n", product1.price);
    printf("Stock Availity : %d pcs\n", product1.stock);

    printf("\nProduct 2 Info :\n\n");

    printf("Price : %d\n", product2.price);
    printf("Stock Availity : %d pcs\n", product2.stock);

    printf("\nProduct 3 Info :\n\n");

    printf("Price : %d\n", product3.price);
    printf("Stock Availity : %d pcs\n", product3.stock);

    printf("\nProduct 4 Info :\n\n");
    printf(" Product 3 And Product 4 Info Will Be Same Because Product 4 Is Initiated As Same As Product 3 I.E(Product 4 = Product 3)\n");

    printf("Price : %d\n", product4.price);
    printf("Stock Availity : %d pcs\n", product4.stock);


}
