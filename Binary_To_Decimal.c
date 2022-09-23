#include<stdio.h>
#include <math.h>
/** to convert binary number to decimal formula is
    decimal = sum of each (binary number * base of binary number to the power number position ( 2^position ))
    suppose a binary number is 100111
    to convert it decimal will sum of 1*2^5 + 0*2^4 + 0*2^3 + 1*2^2 + 1*2^1 + 1*2^0 = 39
    as base of binary number is 2.
    note : psotision start from right in increasing order from 0.
**/
int main(){

    char binary[]= "100111";
    int len = 6;
    int decimal =0, multi;
    int i, position=5;
    for(i=0; i<len; i++){

        multi= (binary[i]-'0') * pow(2,position); // here binary[i] - '0' convert any element in the array to 0 or 1 because becasue her binary is declared in char type .
        decimal = decimal + multi;
        position --;
    }

    printf("The Decimal Number Of Binary Number %s is %d",binary,decimal);

    return 0;

}
