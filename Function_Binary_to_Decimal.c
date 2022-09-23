#include<stdio.h>
#include<math.h>
#include<string.h>
int binary_to_decimal(char binary[]){

    int len,i,position,multi,decimal=0;
    len = strlen(binary);
    position = len -1;

    for(i=0; i<len; i++){

        multi = (binary[i] - '0') * pow(2,position);
        decimal = decimal+multi;
        position--;

    }
    return decimal;


}
int main(){
    int deci;
    printf("Enter A Binary Number : ");
    char bin[100];
    gets(bin);
    deci = binary_to_decimal(bin);

    printf("The Decimal Value is %d", deci);

    return 0;

}
