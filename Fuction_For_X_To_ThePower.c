#include<stdio.h>
int power_of_x(int base, int expo){

    int i,result=1;



    for(i=1; i<=expo; i++){

        result = base * result;
    }
    return result;
}

int main(){

    int base,expo,result;
    printf("Enter Base Number : ");
    scanf("%d",  &base);
    printf("Enter Power Number i.e Exponenet : ");
    scanf("%d", &expo);

    result = power_of_x(base, expo);

    printf("The Value Of %d To The Power %d is : %d", base, expo, result );

    return 0;
}
