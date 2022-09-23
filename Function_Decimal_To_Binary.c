#include<stdio.h>
void decimal_to_binary(int deci){

    int binary[32],div,remain,i,j,k;
    deci = k;

    // Caculation AAnd Storing The Remainder To The Array
    for(i=0; div>0;i++){

        div = deci / 2;
        remain = deci/2;
        binary[i] = remain;
        deci = div; // updating the number After Division.
    }
    printf("\n\nThe Conversion Of Decimal Number %d To Binary Is : ",k);
    // Reversing The Array
    for(j= i-1; j>=0; j--){

        printf("%d",binary[j]);
    }

}

int main(){


    int decimal;
    printf("Enter a decimal to Convert to Binary Number : ");

    scanf("%d",decimal);

    decimal_to_binary(decimal);

    return 0;
}
