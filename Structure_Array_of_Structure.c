#include<stdio.h>
struct Product{

    int id,price,stock;
};

int main(){

    int size, i;
    printf("How Many Product Needs To Be Inserted: ");
    scanf("%d",&size);
    struct Product dairy_product[size];

    for(i=0; i<size; i++){

        printf("\n\nEnter Info for Product %d\n", i+1);
        printf("Enter Product id :\n");
        scanf("%d",&dairy_product[i].id);
        printf("Enter Product Price  :\n");
        scanf("%d",&dairy_product[i].price);
        printf("Enter Product Stock  :\n");
        scanf("%d",&dairy_product[i].stock);
        printf("\n\n");

    }


    for(i=0; i<size; i++){

        printf("Id Of Product %d Is %d\n", i+1, dairy_product[i].id);

        printf("Price Of Product %d Is %d\n", i+1, dairy_product[i].price);

        printf("Stock Available For Product %d Is %d\n", i+1, dairy_product[i].stock);

        printf("\n\n");
    }

    return 0;

}
